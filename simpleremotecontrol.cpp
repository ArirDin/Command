#include "simpleremotecontrol.h"

SimpleRemoteControl::SimpleRemoteControl()
{

}

void SimpleRemoteControl::setCommand(Command *command) {
    slot = command;
}

void SimpleRemoteControl::buttonWasPressed() {
    slot->execute();
}
