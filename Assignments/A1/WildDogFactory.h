//
// Created by jo on 2020/08/12.
//

#ifndef A1_WILDDOGFACTORY_H
#define A1_WILDDOGFACTORY_H
#include "cmake-build-debug/Task1/Predator.h"
#include "PredatorFactory.h"

class WildDogFactory: public PredatorFactory {
    Predator* createPredator(string huntingMethod, string speciality);
};


#endif //A1_WILDDOGFACTORY_H
