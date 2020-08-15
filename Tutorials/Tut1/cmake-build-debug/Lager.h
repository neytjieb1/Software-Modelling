//
// Created by jo on 2020/08/13.
//

#ifndef TUT1_LAGER_H
#define TUT1_LAGER_H
#include "Beer.h"

class Lager: public Beer {
public:
    string brand;
    Lager(string brand) : Beer(brand, "BeerTypes") { this->brand = brand;}
};

class Pilsner: public Beer {
public:
    string brand;
    Pilsner(string brand) : Beer(brand, "BeerTypes") { this->brand = brand;}
};

class Stout: public Beer {
public:
    string brand;
    Stout(string brand) : Beer(brand, "BeerTypes") { this->brand = brand;}
};

#endif //TUT1_LAGER_H
