//
// Created by jo on 2020/10/01.
//

#ifndef A4_MOVEBACKWARD_H
#define A4_MOVEBACKWARD_H
#include "Command.h"

class MoveBackward : public Command {
public:
    MoveBackward(RemoteControlVehicle* vehicle) : Command(vehicle) {};
    void execute() override {
        receiver->backward();
    };
    void undo() override {
        receiver->forward();
    };
};

#endif //A4_MOVEBACKWARD_H
