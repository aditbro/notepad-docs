#include "messenger.h"

#include <cstring>
#include <iostream>
#include <unistd.h>
#include <thread>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <poll.h>

Messenger::Messenger() {
    Messenger(8181);
}

Messenger::~Messenger() {
    stopServer();
}

Messenger::Messenger(int port) {
    int listenPort = port;

    memset(&servaddr, 0, sizeof(servaddr));
    memset(&cliaddr, 0, sizeof(cliaddr));

    if ( (listenSocket = socket(AF_INET, SOCK_DGRAM, 0)) < 0 ) {
        throw "socket creation failed";
    }

    if ( (sendSocket = socket(AF_INET, SOCK_DGRAM, 0)) < 0 ) {
        throw "binding send socket failed";
    }

    servaddr.sin_family    = AF_INET; // IPv4
    servaddr.sin_addr.s_addr = INADDR_ANY;
    servaddr.sin_port = htons(listenPort);

    if ( bind(listenSocket, (const struct sockaddr *)&servaddr, sizeof(servaddr)) < 0 )
    {
        throw "binding listen socket failed";
    }

    isServerRunning = false;
    isSenderRunning = false;
}

void Messenger::addClient(std::string clientAddress, int port) {
    struct sockaddr_in newAddr;

    newAddr.sin_family = AF_INET;
    newAddr.sin_port = htons(port);
    newAddr.sin_addr.s_addr = inet_addr(clientAddress.c_str());

    this->clients.push_back(newAddr);
}

struct sockaddr_in Messenger::getClient(int idx){
    return clients.at(idx);
}

void Messenger::broadcast(CRDT data){
    outboxDataQ.push(data);
}

bool Messenger::isInboxEmpty(){
    return inboxDataQ.empty();
}

CRDT Messenger::popInbox(){
    CRDT data = inboxDataQ.front();
    inboxDataQ.pop();
    return data;
}

void Messenger::runServer() {
    isSenderRunning = true;
    isServerRunning = true;
    serverThread = std::thread(&Messenger::receivingServer, this);
    senderThread = std::thread(&Messenger::sendingServer, this);
}

void Messenger::sendingServer() {
    while(isSenderRunning) {
        while(!outboxDataQ.empty()) {
            sendData(outboxDataQ.front());
            outboxDataQ.pop();
        }
    }
}

void Messenger::sendData(CRDT data) {
    const char* serialized_data = data.serialize();
    for(struct sockaddr_in client : clients) {
        std::cout << "sending data " << data.getValue() << std::endl;
        sendto(sendSocket, serialized_data, sizeof(CRDT), MSG_WAITALL, (struct sockaddr *) &client, sizeof(client));
    }
}

void Messenger::receivingServer() {
    char buffer[sizeof(CRDT)];
    socklen_t len;

    while(isServerRunning) {       
        recvfrom(listenSocket, (char *)buffer, 100, MSG_WAITALL, ( struct sockaddr *) &cliaddr, &len);
        CRDT newData = CRDT::deserialize(buffer);
        std::cout << newData.getValue() << " newcoming data value" << std::endl;
        this->inboxDataQ.push(newData);
    }

    std::cout << "receiving server end" << std::endl;
}

void Messenger::stopServer() {
    if(isServerRunning && isSenderRunning) {
        addClient("127.0.0.1", listenPort);
        CRDT stop(0, 0, '0', 0.0);
        sendData(stop);
        isServerRunning = false;
        while(isInboxEmpty());
        close(listenSocket);
        serverThread.join();

        isSenderRunning = false;
        close(sendSocket);
        senderThread.join();
    }
}
