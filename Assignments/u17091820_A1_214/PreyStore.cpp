//
// Created by jo on 2020/08/18.
//

#include "PreyStore.h"

void PreyStore::storeMemento(PreyMemento *mem) {
    this->mem = mem;
}

PreyMemento *PreyStore::retreivePreyMemento() {
    return this->mem;
}

PreyStore::~PreyStore() {
    cout << "PreyStore Destructed" << endl;
}

PreyStore::PreyStore() {
    cout << "Constructor: PreyStore"<<endl;
}
