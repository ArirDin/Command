#include "garagedoordowncommand.h"

GarageDoorDownCommand::GarageDoorDownCommand(GarageDoor *gd) {
    this->garageDoor = gd;
    this->name = "GarageDoorDownCommand";
}

void GarageDoorDownCommand::execute() {
    garageDoor->down();
}
