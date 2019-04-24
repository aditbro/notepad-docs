#include <iostream>
#include <QString>
#include <QKeyEvent>
#include "controller.h"
#include "crdt.h"

bool isdoubleEqual(double x1, double x2) {
    double epsilon = 1e-100;

    if(std::abs(x1-x2) < epsilon) {
        return true;
    } else {
        return false;
    }
}

Controller::Controller() {

}

Controller::~Controller(){
    isThreadRunning = false;
    mainThread.join();
    delete msgr;
}

Controller::Controller(int port) {
    cursorPosition = 0;
    isThreadRunning = true;
    msgr = new Messenger(port);
    msgr->runServer();
    mainThread = std::thread(&Controller::mainControl, this);
}

void Controller::mainControl() {
    while(isThreadRunning) {
        if(!keyPressQ.empty()) {
            processKeyPress();
        }

        if(!msgr->isInboxEmpty()) {
            processMessage();
        }
    }
}

double Controller::getKeyPressDeletePosition(CRDT keyPress) {
    double position = getCRDTPosition((int)keyPress.getPosition()-1);
    return position;
}

double Controller::getKeyPressInsertPosition(CRDT keyPress) {
    double position;

    if((int) keyPress.getPosition() ==  crdtVector.size()) {
        if(crdtVector.size() == 0) {
            position = 1000000;
        } else {
            position = crdtVector.back().getPosition() + 100000;
        }
    } else if((int)keyPress.getPosition() == 0) {
        position = (int)getCRDTPosition(0)/2;
    } else {
        double before_pos;
        position = getCRDTPosition((int) keyPress.getPosition());
        position += getCRDTPosition((int) keyPress.getPosition() - 1);
        position = (int)position/2;
    }

    std::cout << "position after " << position << std::endl;

    return position;
}

void Controller::processKeyPress() {
    CRDT keyPress = keyPressQ.front();
    keyPressQ.pop();
    std::cout << "received pos " << keyPress.getPosition() << std::endl;

    if(keyPress.getCommand() == 'D') {
        if(cursorPosition == 0) {
            return;
        }
        keyPress.setPosition(getKeyPressDeletePosition(keyPress));

        operationDelete(keyPress);
        broadcastCommand(keyPress);
    } else if (keyPress.getCommand() == 'I') {
        keyPress.setPosition(getKeyPressInsertPosition(keyPress));
        operationInsert(keyPress);
        broadcastCommand(keyPress);
    } else if (keyPress.getCommand() == 'M') {
        moveCursor(keyPress);
    }

    updateView();
}

void Controller::processMessage() {

}

void Controller::operationDelete(CRDT keypress) {
    int crdtIndex = getCRDTIndex(keypress);
    if(crdtIndex != -1 && keypress.getValue() == crdtVector.at(crdtIndex).getValue()) {
        crdtVector.erase(crdtVector.begin() + crdtIndex);
        content.erase(crdtIndex, 1);
        cursorPosition = cursorPosition - 1;
    } else {
        std::cout << "deletion not found" << std::endl;
        std::cout << "val " << keypress.getValue() << " position " << keypress.getPosition() << std::endl;
    }
}

void Controller::operationInsert(CRDT keypress) {
    int insertIndex = getCRDTInsertIndex(keypress);
    std::cout << "insertIndex " << insertIndex << " " << keypress.getPosition() <<std::endl;
    if(insertIndex >= crdtVector.size()) {
        crdtVector.push_back(keypress);
        content.append(1, keypress.getValue());
    } else {
        crdtVector.insert(crdtVector.begin() + insertIndex, keypress);
        content.insert(content.begin() + insertIndex, 1, keypress.getValue());
    }
    cursorPosition++;
}

int Controller::getCRDTInsertIndex(CRDT data) {
    for(int i = 0; i < crdtVector.size(); i++) {
        if(crdtVector.at(i).getPosition() > data.getPosition()) {
            std::cout << "got insert index " << i << std::endl;
            return i;
        }
    }

    return crdtVector.size();
}

void Controller::moveCursor(CRDT keypress) {
    if(keypress.getValue() == 'L') {
        if(cursorPosition > 0) {
            cursorPosition--;
        }
    } else if(keypress.getValue() == 'R') {
        if(cursorPosition < crdtVector.size()) {
            cursorPosition++;
        }
    }
}

int Controller::getCRDTIndex(CRDT data) {
    CRDT current;
    for(int i = 0; i < crdtVector.size(); i++) {
        current = crdtVector.at(i);
        if(isdoubleEqual(current.getPosition(), data.getPosition())) {
            return i;
        }
    }

    return -1;
}

double Controller::getCRDTPosition(int idx) {
    if(idx < 0 || idx >= crdtVector.size()) {
        return -1;
    }

    CRDT current = crdtVector.at(idx);
    return current.getPosition();
}

void Controller::broadcastCommand(CRDT command) {
    msgr->broadcast(command);
}

void Controller::updateView() {
    QString updatedContent = QString::fromStdString(content);
    std::cout << cursorPosition << std::endl;
    emit updateContent(updatedContent);
    emit updateCursor(cursorPosition);
}

void Controller::appendKeyPressedQ(CRDT data, int cursorPosition) {
    data.setPosition((double) cursorPosition);
    keyPressQ.push(data);
}

void Controller::addPeer(std::string address, int port) {
    msgr->addClient(address, port);
}
