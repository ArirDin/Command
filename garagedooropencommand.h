#ifndef GARAGEDOOROPENCOMMAND_H
#define GARAGEDOOROPENCOMMAND_H

#include "command.h"
#include "garagedoor.h"

class GarageDoorOpenCommand : public Command {
protected:
    GarageDoor *garageDoor;
public:
    GarageDoorOpenCommand(GarageDoor*);
    virtual void execute();
};

#endif // GARAGEDOOROPENCOMMAND_H
