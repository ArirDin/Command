#include "stereooffcommand.h"

StereoOffCommand::StereoOffCommand(Stereo *stereo) {
    this->stereo = stereo;
    this->name = "StereoOffCommand on " + stereo->location;
}

void StereoOffCommand::execute() {
    stereo->off();
}
