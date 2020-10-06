#include "hottuboffcommand.h"

HottubOffCommand::HottubOffCommand(Hottub *hottub) {
    this->hottub = hottub;
    this->name = "HottubOffCommand";
}

void HottubOffCommand::execute() {
    hottub->cool();
    hottub->off();
}
