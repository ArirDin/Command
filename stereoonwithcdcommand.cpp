#include "stereoonwithcdcommand.h"

StereoOnWithCDCommand::StereoOnWithCDCommand(Stereo *stereo) {
    this->stereo = stereo;
    this->name = "StereoOnWithCDCommand on " + stereo->location;
}

void StereoOnWithCDCommand::execute() {
    stereo->on();
    stereo->setCD();
    stereo->setVolume(11);
}
