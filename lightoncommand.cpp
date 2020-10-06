#include "lightoncommand.h"

LightOnCommand::LightOnCommand(Light *l) {
    this->light = l;
    this->name = "LightOnCommand on " + l->location;
}

void LightOnCommand::execute() {
    light->on();
}
