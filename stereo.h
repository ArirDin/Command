#ifndef STEREO_H
#define STEREO_H

#include <QString>
#include <iostream>

using namespace std;

class Stereo {
public:
    Stereo(QString location);
    QString location;
    void on();
    void off();
    void setCD();
    void setDVD();
    void setRadio();
    void setVolume(int volume);
};

#endif // STEREO_H
