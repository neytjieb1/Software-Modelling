//
// Created by jo on 2020/08/18.
//

#ifndef A1_TRYTWO_PREDATORMEMENTO_H
#define A1_TRYTWO_PREDATORMEMENTO_H
#include "PredatorState.h"

class PredatorMemento {
private:
    PredatorState* state;
    PredatorState* getState();
    void setState(PredatorState* state);
    PredatorMemento();
public:
    friend class Predator;
};

#endif //A1_TRYTWO_PREDATORMEMENTO_H
