//
// Created by jo on 2020/08/13.
//

#ifndef TUT1_BOTTLE_H
#define TUT1_BOTTLE_H
#include "Lager.h"

class Bottle {
private:
    Beer* beerInside;
public:
    ~Bottle();
    void setBeerInside(Beer* );
    Beer* getBeerInside();

};

Bottle::~Bottle() {
    cout << "Bottle Smashed" << endl;
}

void Bottle::setBeerInside(Beer *b) {
    cout << "The beer inside this ol' bottle now be " << b->getType()<<endl;
}

Beer *Bottle::getBeerInside() {
    return this->beerInside;
}


#endif //TUT1_BOTTLE_H
