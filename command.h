#ifndef COMMAND_H
#define COMMAND_H

#include <QString>

class Command {
public:
    Command();
    QString name;
    virtual void execute() = 0;
};

#endif // COMMAND_H
