//
// Created by jo on 2020/10/01.
//

#ifndef A4_TURNOFF_H
#define A4_TURNOFF_H
#include "Command.h"

class TurnOff : public Command {
public:
    TurnOff(RemoteControlVehicle* vehicle) : Command(vehicle) {};
    void execute() override {
        receiver->off();
    };
    void undo() override {
        receiver->on();
    };
};

#endif //A4_TURNOFF_H
