#include "hottuboncommand.h"

HottubOnCommand::HottubOnCommand(Hottub *hottub) {
    this->hottub = hottub;
    this->name = "HottubOnCommand";
}

void HottubOnCommand::execute() {
    hottub->on();
    hottub->heat();
    hottub->bubblesOn();
}
