//
// Created by jo on 2020/08/15.
//

#include "PredatorMemento.h"

PredatorState *PredatorMemento::getState() { return this->_state; }

void PredatorMemento::setState(PredatorState *state) { _state = state; };