//
// Created by jo on 2020/10/01.
//

#ifndef A4_TURNON_H
#define A4_TURNON_H
#include "Command.h"

class TurnOn : public Command {
public:
    void execute() override {
        receiver->on();
    };
    void undo() override {
        receiver->off();
    };
};


#endif //A4_TURNON_H
