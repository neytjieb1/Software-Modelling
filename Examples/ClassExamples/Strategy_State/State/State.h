//
// Created by jo on 2020/08/28.
//

#ifndef STRATEGY_STATE_STATE_H
#define STRATEGY_STATE_STATE_H
#include "Context.h"
#include <string>
using namespace std;

class Context;

class State {
public:
    State();
    ~State();
    virtual void handleChange(Context* c) = 0;
    virtual string getColour() = 0;
};

class RedState : public State {
public:
    RedState();
    ~RedState();
    void handleChange(Context *c) override;
    string getColour() override;
};

class AmberState : public State {
public:
    AmberState();
    ~AmberState();
    void handleChange(Context *c) override;
    string getColour() override;
};

class GreenState : public State {
public:
    GreenState();
    ~GreenState();
    void handleChange(Context *c) override;
    string getColour() override;
};

#endif //STRATEGY_STATE_STATE_H
