#include "garagedoor.h"

GarageDoor::GarageDoor()
{

}

void GarageDoor::up() {
    cout << "Garage Door is Open" << endl;
}

void GarageDoor::down() {
    cout << "Garage Door is Closed" << endl;
}

void GarageDoor::stop() {
    cout << "Garage Door is Stopped" << endl;
}

void GarageDoor::lightOn() {
    cout << "Garage light is on" << endl;
}

void GarageDoor::lightOff() {
    cout << "Garage light is off" << endl;
}
