//
// Created by jo on 2020/08/12.
//

#include "LionFactory.h"
#include "cmake-build-debug/Task1/Lion.h"

Predator *LionFactory::createPredator(string huntingMethod, string speciality) {
    return new Lion(13, 5.0, huntingMethod, speciality);
}
