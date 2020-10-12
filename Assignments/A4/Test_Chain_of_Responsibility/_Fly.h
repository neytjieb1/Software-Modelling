//
// Created by jo on 2020/10/03.
//

#ifndef A4__FLY_H
#define A4__FLY_H
#include "_Command.h"

class Fly : public _Command {
public:
    Fly(RCVehicle* vehicle) : _Command(vehicle) {};
    void execute() override{
        receiver->handleRequest(this);
    }
    void undo() override {
        receiver->backward();
        receiver->off();
    }
};



#endif //A4__FLY_H
