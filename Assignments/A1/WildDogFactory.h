//
// Created by jo on 2020/08/12.
//

#ifndef A1_WILDDOGFACTORY_H
#define A1_WILDDOGFACTORY_H
#include "Predator.h"

class WildDogFactory {
    Predator* createPredator(string huntingMethod, string speciality);
};


#endif //A1_WILDDOGFACTORY_H
