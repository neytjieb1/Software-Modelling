//
// Created by jo on 2020/08/15.
//

#include "PredatorMemento.h"

PredatorState *PredatorMemento::getState() { return this->state; }

void PredatorMemento::setState(PredatorState *state) { this->state = state; }

PredatorMemento::PredatorMemento() {

};