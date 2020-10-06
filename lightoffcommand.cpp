#include "lightoffcommand.h"

LightOffCommand::LightOffCommand(Light *l) {
    this->light = l;
    this->name = "LightOffCommand on " + l->location;
}

void LightOffCommand::execute() {
    light->off();
}
