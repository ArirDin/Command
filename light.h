#ifndef LIGHT_H
#define LIGHT_H

#include <QString>
#include <iostream>

using namespace std;

class Light {
public:
    Light(QString);
    QString location;
    void on();
    void off();
};

#endif // LIGHT_H
