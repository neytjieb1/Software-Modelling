//
// Created by jo on 2020/08/18.
//

#ifndef A1_TRYTWO_PREDATORSTORE_H
#define A1_TRYTWO_PREDATORSTORE_H
#include "PredatorMemento.h"

class PredatorStore {
private:
    PredatorMemento* mem;

public:
    void storeMemento(PredatorMemento* mem);
    PredatorMemento* retreivePredatorMemento();
    ~PredatorStore();
};


#endif //A1_TRYTWO_PREDATORSTORE_H
