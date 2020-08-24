//
// Created by jo on 2020/08/15.
//
#include <iostream>
#include "PredatorMemento.h"
using namespace std;

PredatorState *PredatorMemento::getState() { return this->state; }

void PredatorMemento::setState(PredatorState *state) { this->state = state; }

PredatorMemento::PredatorMemento() {
    cout << "Memento for Prey" << endl;
};