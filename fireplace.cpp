#include "fireplace.h"

Fireplace::Fireplace(QString location)
{
    this->location = location;
}

void Fireplace::on() {
        cout << location.toStdString() << " fire is on" << endl;
}

void Fireplace::off() {
    cout << location.toStdString() << " fire is off" << endl;
}
