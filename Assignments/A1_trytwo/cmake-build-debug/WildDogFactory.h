//
// Created by jo on 2020/08/18.
//

#ifndef A1_TRYTWO_WILDDOGFACTORY_H
#define A1_TRYTWO_WILDDOGFACTORY_H
#include "PredatorFactory.h"
#include "WildDog.h"

class WildDogFactory: public PredatorFactory {
public:
    WildDogFactory();
    ~WildDogFactory();
    Predator* createPredator(string huntingMethod, string speciality);
};


#endif //A1_TRYTWO_WILDDOGFACTORY_H
