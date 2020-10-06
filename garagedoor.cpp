#include "garagedoor.h"

GarageDoor::GarageDoor(QString location) {
    this->location = location;
}

void GarageDoor::up() {
    cout << location.toStdString() << " garage Door is Open" << endl;
}

void GarageDoor::down() {
    cout << location.toStdString() << " garage Door is Closed" << endl;
}

void GarageDoor::stop() {
    cout << location.toStdString() << " garage Door is Stopped" << endl;
}

void GarageDoor::lightOn() {
    cout << location.toStdString() << " garage light is on" << endl;
}

void GarageDoor::lightOff() {
    cout << location.toStdString() << " garage light is off" << endl;
}
