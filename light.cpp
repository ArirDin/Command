#include "light.h"

Light::Light(QString location) {
    this->location = location;
}

void Light::on() {
        cout << location.toStdString() << " light is on" << endl;
}

void Light::off() {
    cout << location.toStdString() << " light is off" << endl;
}
