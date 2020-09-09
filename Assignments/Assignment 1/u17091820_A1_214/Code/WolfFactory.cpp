//
// Created by jo on 2020/08/12.
//

#include "WolfFactory.h"

Predator *WolfFactory::createPredator(string huntingMethod, string speciality) {
    cout << "Making a Wolf in the Factory" << endl;
    return new Wolf( huntingMethod, speciality);
}

WolfFactory::WolfFactory() {
    cout << "Constructor: WolfFactory"<<endl;

}

WolfFactory::~WolfFactory() {
    cout << "Destructor: WolfFactory" << endl;

}
