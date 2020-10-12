//
// Created by jo on 2020/10/01.
//

#ifndef A4_COMMAND_H
#define A4_COMMAND_H
//#include "RemoteControlVehicle.h"

class RemoteControlVehicle;

class Command {
protected:
    RemoteControlVehicle* receiver;
public:
    Command(RemoteControlVehicle* r) : receiver(r) {} ;
    virtual void execute() = 0;
    virtual void undo() = 0;
};


#endif //A4_COMMAND_H
