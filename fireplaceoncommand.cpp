#include "fireplaceoncommand.h"

FireplaceOnCommand::FireplaceOnCommand(Fireplace *fp)
{
    this->fire = fp;
    this->name = "FireplaceOnCommand";
}

void FireplaceOnCommand::execute() {
    fire->on();
}

