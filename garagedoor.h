#ifndef GARAGEDOOR_H
#define GARAGEDOOR_H

#include <QString>
#include <iostream>

using namespace std;

class GarageDoor {
protected:
    QString location;
public:
    GarageDoor(QString location);
    void up();
    void down();
    void stop();
    void lightOn();
    void lightOff();
};

#endif // GARAGEDOOR_H
