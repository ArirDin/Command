#include "garagedoorupcommand.h"

GarageDoorUpCommand::GarageDoorUpCommand(GarageDoor *gd) {
    this->garageDoor = gd;
    this->name = "GarageDoorUpCommand";
}

void GarageDoorUpCommand::execute() {
    garageDoor->up();
}
