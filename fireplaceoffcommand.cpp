#include "fireplaceoffcommand.h"

FireplaceOffCommand::FireplaceOffCommand(Fireplace *fp)
{
    this->fire = fp;
    this->name = "FireplaceOffCommand";
}

void FireplaceOffCommand::execute() {
    fire->off();
}
