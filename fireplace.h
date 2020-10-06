#ifndef FIREPLACE_H
#define FIREPLACE_H

#include <QString>
#include <iostream>

using namespace std;

class Fireplace
{
public:
    Fireplace(QString);
    QString location;
    void on();
    void off();
};

#endif // FIREPLACE_H
