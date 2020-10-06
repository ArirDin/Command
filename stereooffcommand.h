#ifndef STEREOOFFCOMMAND_H
#define STEREOOFFCOMMAND_H

#include "command.h"
#include "stereo.h"

class StereoOffCommand : public Command {
protected:
    Stereo *stereo;
public:
    StereoOffCommand(Stereo*);
    virtual void execute();
};

#endif // STEREOOFFCOMMAND_H
