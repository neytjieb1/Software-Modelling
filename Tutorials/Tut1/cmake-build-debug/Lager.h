//
// Created by jo on 2020/08/13.
//

#ifndef TUT1_LAGER_H
#define TUT1_LAGER_H
#include "Beer.h"

class Lager: public Beer {
public:
    string brand;
    Lager(string b) : Beer(b, "BeerTypes") { this->brand = b;}
};

/*class Pilsner: public Beer {
public:
    string brand;
    Pilsner(string b) : Beer(b, "BeerTypes") { this->brand = b;}
};

class Stout: public Beer {
public:
    string brand;
    Stout(string b) : Beer(b, "BeerTypes") { this->brand = b;}
};*/

#endif //TUT1_LAGER_H
