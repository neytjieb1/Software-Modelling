//
// Created by jo on 2020/08/28.
//

#ifndef STRATEGY_STATE_CONTEXT_H
#define STRATEGY_STATE_CONTEXT_H
#include "State.h"
#include <string>
using namespace std;

class State;

class Context {
private:
    State* state;

public:
    Context();
    ~Context();
    void change();
    void getColor();
    void setState(State* state);
};


#endif //STRATEGY_STATE_CONTEXT_H
