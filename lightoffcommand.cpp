#include "lightoffcommand.h"

LightOffCommand::LightOffCommand(Light *l) {
    this->light = l;
}

void LightOffCommand::execute() {
    light->off();
}
