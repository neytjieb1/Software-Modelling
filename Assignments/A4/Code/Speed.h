//
// Created by jo on 2020/10/12.
//

#ifndef A4_SPEED_H
#define A4_SPEED_H

#include "Command.h"

class Speed : public Command {
public:
    Speed(RemoteControlVehicle* vehicle) : Command(vehicle) {};
    void execute() override{
        receiver->handleRequest(this);
    }
    void undo() override {
        receiver->backward();
        receiver->off();
    }
};

#endif //A4_SPEED_H
