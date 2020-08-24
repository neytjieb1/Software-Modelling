//
// Created by jo on 2020/08/18.
//

#ifndef A1_TRYTWO_PREYSTORE_H
#define A1_TRYTWO_PREYSTORE_H
#include "PreyMemento.h"

class PreyStore {
private:
    PreyMemento* mem;

public:
    PreyStore();
    void storeMemento(PreyMemento* mem);
    PreyMemento* retreivePreyMemento();
    ~PreyStore();
};

#endif //A1_TRYTWO_PREYSTORE_H
