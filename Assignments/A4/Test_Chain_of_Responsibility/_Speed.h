//
// Created by jo on 2020/10/03.
//

#ifndef A4__SPEED_H
#define A4__SPEED_H

#include "_Command.h"

class Speed : public _Command {
public:
    Speed(RCVehicle* vehicle) : _Command(vehicle) {};
    void execute() override{
        receiver->handleRequest(this);
    }
    void undo() override {
        receiver->backward();
        receiver->off();
    }
};

#endif //A4__SPEED_H
