//
// Created by jo on 2020/08/13.
//

#ifndef TUT1_BOTTLE_H
#define TUT1_BOTTLE_H
#include "BeerProductionStation.h"
#include "Lager.h"

class Bottle: public BeerProductionStation {
private:
    Beer* beerInside;
public:
    ~Bottle() override;
    Beer* brew(string) override;
    void cap(Bottle*) override;
    void label(Bottle*) override;
    void setBeerInside(Beer* );

};

Bottle::~Bottle() {
    cout << "Bottle Smashed" << endl;
}

Beer *Bottle::brew(string brand) {
    return new Lager(brand);
}

void Bottle::cap(Bottle *b) {
    cout << "Cap with brand: " << b->beerInside->getBrand()<<endl;
}

void Bottle::label(Bottle *b) {
    cout << "Label with type: " << b->beerInside->getType()<<endl;
}

void Bottle::setBeerInside(Beer *b) {
    cout << "The beer inside this ol' bottle now be " << b->getType()<<endl;
}


#endif //TUT1_BOTTLE_H
