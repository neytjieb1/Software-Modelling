//
// Created by jo on 2020/08/12.
//

#include "CheetahFactory.h"
#include "cmake-build-debug/Task1/Cheetah.h"

Predator *CheetahFactory::createPredator(string huntingMethod, string speciality) {
    return new Cheetah(11,4.0, huntingMethod, speciality);
}
