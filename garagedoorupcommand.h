#ifndef GARAGEDOORUPCOMMAND_H
#define GARAGEDOORUPCOMMAND_H

#include "command.h"
#include "garagedoor.h"

class GarageDoorUpCommand : public Command {
protected:
    GarageDoor *garageDoor;
public:
    GarageDoorUpCommand(GarageDoor*);
    virtual void execute();
};

#endif // GARAGEDOORUPCOMMAND_H
