#ifndef CONTROLLER_H
#define CONTROLLER_H

#endif // CONTROLLER_H

#include <QObject>
#include <thread>

class Controller : public QObject {
    Q_OBJECT
public :
    Controller();
    ~Controller();
private :
    std::thread mainThread;
    bool isThreadRunning;
    void run();

signals :
    void updateContent(QString content);

private slots :
    void broadcastCommand();
};
