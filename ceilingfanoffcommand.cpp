#include "ceilingfanoffcommand.h"

CeilingFanOffCommand::CeilingFanOffCommand(CeilingFan *fan) {
    this->ceilingFan = fan;
    this->name = "CeilingFanOffCommand on " + fan->location;
}

void CeilingFanOffCommand::execute() {
    ceilingFan->off();
}
