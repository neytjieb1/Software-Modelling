//
// Created by jo on 2020/08/12.
//

#include "CheetahFactory.h"

Predator *CheetahFactory::createPredator(string huntingMethod, string speciality) {
    cout << "Making Cheetah in Factory" << endl;
    return new Cheetah(huntingMethod, speciality);
}

CheetahFactory::CheetahFactory() {
    cout << "Constructor: Cheetah Factory"<<endl;
}

CheetahFactory::~CheetahFactory() {
    cout << "Destructor: Cheetah Factory" << endl;
}
