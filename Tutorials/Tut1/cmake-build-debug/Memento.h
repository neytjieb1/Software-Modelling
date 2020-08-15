//
// Created by jo on 2020/08/14.
//

#ifndef TUT1_MEMENTO_H
#define TUT1_MEMENTO_H
#include "State.h"

class Memento {
private:
    State state;
    void setState(State state);
    State getState();
};


#endif //TUT1_MEMENTO_H
