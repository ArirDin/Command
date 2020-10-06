#ifndef HOTTUB_H
#define HOTTUB_H

#include <iostream>

using namespace std;

class Hottub {
protected:
    bool vkl;
    int temperature;
public:
    Hottub();
    void on();
    void off();
    void bubblesOn();
    void bubblesOff();
    void jetsOn();
    void jetsOff();
    void setTemperature(int temperature);
    void heat();
    void cool();
};

#endif // HOTTUB_H
