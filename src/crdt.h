#ifndef CRDT_H
#define CRDT_H

#include <string>

class CRDT {
private:
    int siteId;
    char command;
    char value;
    float position;

public:
    CRDT(int siteId, char command, char value, float position);

    void setSiteId(int);
    void setCommand(char);
    void setValue(char);
    void setPosition(float);

    int getSiteId();
    char getCommand();
    char getValue();
    float getPosition();

    char* serialize();
    static CRDT deserialize(char*);
};

#endif // CRDT_H
