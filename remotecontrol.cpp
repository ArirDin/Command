#include "remotecontrol.h"

RemoteControl::RemoteControl() {
    Command *noCommand = new NoCommand();
    for (int i = 0; i < 7; i++) {
        onCommands.append(noCommand);
        offCommands.append(noCommand);
    }
}

void RemoteControl::setCommand(int slot, Command *onCommand, Command *offCommand) {
    onCommands[slot] = onCommand;
    offCommands[slot] = offCommand;
}

void RemoteControl::onButtonWasPushed(int slot) {
    onCommands[slot]->execute();
}

void RemoteControl::offButtonWasPushed(int slot) {
    offCommands[slot]->execute();
}

QString RemoteControl::toString() {
    QString str = "\n------ Remote Control -------\n";
    for (int i = 0; i < onCommands.size(); i++) {
        str += "[slot " + QString::number(i) + "] " + onCommands[i]->name + "\t";
        str += "    " + offCommands[i]->name + "\n";
    }
    return str;
}
