#include "garagedooropencommand.h"

GarageDoorOpenCommand::GarageDoorOpenCommand(GarageDoor *gd) {
    this->garageDoor = gd;
}

void GarageDoorOpenCommand::execute() {
    garageDoor->up();
}
