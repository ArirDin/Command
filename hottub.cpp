#include "hottub.h"

Hottub::Hottub()
{

}

void Hottub::on() {
    vkl = true;
}

void Hottub::off() {
    vkl = false;
}

void Hottub::bubblesOn() {
    if (vkl) {
        cout << "Hottub is bubbling!" << endl;
    }
}

void Hottub::bubblesOff() {
    if (vkl) {
        cout << "Hottub is not bubbling" << endl;
    }
}

void Hottub::jetsOn() {
    if (vkl) {
        cout << "Hottub jets are on" << endl;
    }
}

void Hottub::jetsOff() {
    if (vkl) {
        cout << "Hottub jets are off" << endl;
    }
}

void Hottub::setTemperature(int temperature) {
    this->temperature = temperature;
}

void Hottub::heat() {
    temperature = 105;
    cout << "Hottub is heating to a steaming 105 degrees" << endl;
}

void Hottub::cool() {
    temperature = 98;
    cout << "Hottub is cooling to 98 degrees" << endl;
}
