//
// Created by jo on 2020/08/14.
//

#include "Memento.h"

void Memento::setState(State state) {
    this->state = state;
}

State Memento::getState() {
    return this->state;
}
