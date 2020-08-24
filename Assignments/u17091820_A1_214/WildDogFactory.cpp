//
// Created by jo on 2020/08/12.
//

#include "WildDogFactory.h"

Predator *WildDogFactory::createPredator(string huntingMethod, string speciality) {
    cout << "Wild Dog Factory" << endl;
    return new WildDog( huntingMethod, speciality);
}
