#include <thread>
#include <iostream>
#include <QString>
#include "controller.h"

Controller::Controller() {
    this->isThreadRunning = true;
    this->mainThread = std::thread(&Controller::run, this);
}

void Controller::run() {
    std::string text;

    while(isThreadRunning) {

    }
}

void Controller::broadcastCommand(QString message) {
    emit updateContent(message);
}

Controller::~Controller() {
    this->isThreadRunning = false;
    this->mainThread.join();
}
