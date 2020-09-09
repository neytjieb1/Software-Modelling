//
// Created by jo on 2020/08/12.
//

#include "LionFactory.h"

Predator *LionFactory::createPredator(string huntingMethod, string speciality) {
    cout << "Making a Lion in the Factory" << endl;
    return new Lion( huntingMethod, speciality);
}

LionFactory::LionFactory() {
    cout << "Constructor: LionFactory"<<endl;

}

LionFactory::~LionFactory() {
    cout << "Destructor: LionFactory" << endl;

}
