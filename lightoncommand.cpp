#include "lightoncommand.h"

LightOnCommand::LightOnCommand(Light *l) {
    this->light = l;
}

void LightOnCommand::execute() {
    light->on();
}
