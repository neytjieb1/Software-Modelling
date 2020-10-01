//
// Created by jo on 2020/10/01.
//

#ifndef A4_MOVEFORWARD_H
#define A4_MOVEFORWARD_H
#include "Command.h"

class MoveForward : public Command {
public:
    void execute() override {
        receiver->forward();
    };
    void undo() override {
        receiver->backward();
    };
};


#endif //A4_MOVEFORWARD_H
