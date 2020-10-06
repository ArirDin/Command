#ifndef LIGHTONCOMMAND_H
#define LIGHTONCOMMAND_H

#include "command.h"
#include "light.h"

class LightOnCommand : public Command {
protected:
    Light *light;
public:
    LightOnCommand(Light*);
    virtual void execute();
};

#endif // LIGHTONCOMMAND_H
