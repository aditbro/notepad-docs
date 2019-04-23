#include <string>
#include <cstdlib>
#include <cstring>
#include "crdt.h"

CRDT::CRDT(int siteId, char command, char value, float position){
    this->siteId = siteId;
    this->command = command;
    this->value = value;
    this->position = position;
}

void CRDT::setSiteId(int siteId) {
    this->siteId = siteId;
}

int CRDT::getSiteId(){
    return this->siteId;
}

void CRDT::setCommand(char command) {
    this->command = command;
}

char CRDT::getCommand() {
    return this->command;
}

void CRDT::setValue(char value){
    this->value = value;
}

char CRDT::getValue(){
    return this->value;
}

void CRDT::setPosition(float position) {
    this->position = position;
}

float CRDT::getPosition(){
    return this->position;
}

char* CRDT::serialize() {
    return reinterpret_cast<char*>(this);
}

CRDT CRDT::deserialize(char *crdtData) {
    return *reinterpret_cast<CRDT*>(crdtData);
}
