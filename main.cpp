#include <QCoreApplication>
#include "simpleremotecontrol.h"
#include "garagedoor.h"
#include "garagedooropencommand.h"
#include "light.h"
#include "lightoffcommand.h"
#include "lightoncommand.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    SimpleRemoteControl *remote = new SimpleRemoteControl();
    Light *light = new Light();
    GarageDoor *garageDoor = new GarageDoor();
    LightOnCommand *lightOn = new LightOnCommand(light);
    GarageDoorOpenCommand *garageOpen = new GarageDoorOpenCommand(garageDoor);

    remote->setCommand(lightOn);
    remote->buttonWasPressed();

    remote->setCommand(garageOpen);
    remote->buttonWasPressed();

    return a.exec();
}
