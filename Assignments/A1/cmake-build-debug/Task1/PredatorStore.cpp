//
// Created by jo on 2020/08/15.
//
#include <iostream>
#include "PredatorStore.h"
using namespace std;

void PredatorStore::storeMemento(PredatorMemento *mem) {
    this->mem = mem;
}

PredatorMemento *PredatorStore::retreivePredatorMemento() {
    return this->mem;
}

PredatorStore::~PredatorStore() {
    cout << "PredatorStore Destructed" << endl;
}
