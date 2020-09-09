//
// Created by jo on 2020/08/15.
//

#ifndef A1_MEMENTO_H
#define A1_MEMENTO_H
#include "PredatorState.h"
#include "Predator.h"

class PredatorMemento {
private:
    PredatorState* _state;
    PredatorState* getState();
    void setState(PredatorState* state);
    PredatorMemento();
public:
    friend class Predator;
};


#endif //A1_MEMENTO_H
