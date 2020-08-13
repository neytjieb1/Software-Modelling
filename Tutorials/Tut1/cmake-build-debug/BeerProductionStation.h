//
// Created by jo on 2020/08/13.
//

#ifndef TUT1_BEERPRODUCTIONSTATION_H
#define TUT1_BEERPRODUCTIONSTATION_H
#include <iostream>
using namespace std;
#include "Bottle.h"
#include "Beer.h"

class BeerProductionStation {
public:
    Bottle* produce(string);
    virtual ~BeerProductionStation();

protected:
    void bottle(Beer*, Bottle*);
    virtual Beer* brew(string brand) = 0;
    virtual void cap(Bottle*) = 0;
    virtual void label(Bottle*) = 0;
};


#endif //TUT1_BEERPRODUCTIONSTATION_H
