#include "ceilingfanoncommand.h"

CeilingFanOnCommand::CeilingFanOnCommand(CeilingFan *fan) {
    this->ceilingFan = fan;
    this->name = "CeilingFanOnCommand on " + fan->location;
}

void CeilingFanOnCommand::execute() {
    ceilingFan->high();
}
