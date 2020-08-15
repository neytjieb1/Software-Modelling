//
// Created by jo on 2020/08/14.
//

#include "ConcreateBeerProducers.h"

Beer *LagerProduction::brew(string brand) {
    return new Lager(brand);
}

void LagerProduction::cap(Bottle *bottle) {
    cout << "Cap the bottle with a brand tag: " <<bottle->getBeerInside()->getBrand() << endl;
}

void LagerProduction::label(Bottle *bottle) {
    cout << "Label the bottle with a type: " <<bottle->getBeerInside()->getType() << endl;
}

Beer *PilsnerProduction::brew(string brand) {
    return new Pilsner(brand);
}

void PilsnerProduction::cap(Bottle *bottle) {
    cout << "Cap the bottle with a brand tag: " <<bottle->getBeerInside()->getBrand() << endl;
}

void PilsnerProduction::label(Bottle *bottle) {
    cout << "Label the bottle with a type: " <<bottle->getBeerInside()->getType() << endl;
}

Beer *StoutProduction::brew(string brand) {
    return new Stout(brand);
}

void StoutProduction::cap(Bottle *) {
    cout << "Cap the bottle with a brand tag: " <<bottle->getBeerInside()->getBrand() << endl;
}

void StoutProduction::label(Bottle *) {
    cout << "Label the bottle with a type: " <<bottle->getBeerInside()->getType() << endl;
}
