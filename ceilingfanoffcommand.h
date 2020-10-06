#ifndef CEILINGFANOFFCOMMAND_H
#define CEILINGFANOFFCOMMAND_H

#include "command.h"
#include "ceilingfan.h"

class CeilingFanOffCommand : public Command {
protected:
    CeilingFan *ceilingFan;
public:
    CeilingFanOffCommand(CeilingFan*);
    virtual void execute();
};

#endif // CEILINGFANOFFCOMMAND_H
