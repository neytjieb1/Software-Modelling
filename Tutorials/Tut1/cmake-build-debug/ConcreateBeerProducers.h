//
// Created by jo on 2020/08/14.
//

#ifndef TUT1_CONCREATEBEERPRODUCERS_H
#define TUT1_CONCREATEBEERPRODUCERS_H
#include "BeerProductionStation.h"

class LagerProduction: public BeerProductionStation {
    Beer* brew(string brand) override;
    void cap(Bottle*) override;
    void label(Bottle*) override;
};

class PilsnerProduction: public BeerProductionStation {
    Beer* brew(string brand) override;
    void cap(Bottle*) override;
    void label(Bottle*) override;
};

class StoutProduction: public BeerProductionStation {
    Beer* brew(string brand) override;
    void cap(Bottle*) override;
    void label(Bottle*) override;
};


#endif //TUT1_CONCREATEBEERPRODUCERS_H
