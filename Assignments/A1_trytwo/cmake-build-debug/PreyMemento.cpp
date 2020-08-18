//
// Created by jo on 2020/08/18.
//

#include "PreyMemento.h"

PreyState *PreyMemento::getState() { return this->state; }

void PreyMemento::setState(PreyState *state) { this->state = state; }

PreyMemento::PreyMemento() {}
