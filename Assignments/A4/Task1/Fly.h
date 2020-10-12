//
// Created by jo on 2020/10/03.
//

#ifndef A4_FLY_H
#define A4_FLY_H
#include "Command.h"

class Fly : public Command {
public:
    Fly(RemoteControlVehicle* vehicle) : Command(vehicle) {};
    void execute() override{
        receiver->handleRequest(this);
    }
    void undo() override {
        receiver->backward();
        receiver->off();
    }
};
#endif //A4_FLY_H


/*
 *
 * MoveBackward(RemoteControlVehicle* vehicle) : Command(vehicle) {};
    void execute() override {
        receiver->backward();
    };
    void undo() override {
        receiver->forward();
    };
 */