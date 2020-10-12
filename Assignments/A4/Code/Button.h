//
// Created by jo on 2020/10/01.
//

#ifndef A4_BUTTON_H
#define A4_BUTTON_H
#include "Command.h"

class Button {
private:
    Command* command;

public:
    Button(Command* c) : command(c) {};
    ~Button() {delete command;};        //since dynamically linked
    void press() {command->execute();};
    void doublePress() {command->undo();};
};

#endif //A4_BUTTON_H
