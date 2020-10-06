#ifndef SIMPLEREMOTECONTROL_H
#define SIMPLEREMOTECONTROL_H

#include "command.h"

class SimpleRemoteControl {
protected:
    Command *slot;
public:
    SimpleRemoteControl();
    void setCommand(Command *command);
    void buttonWasPressed();
};

#endif // SIMPLEREMOTECONTROL_H
