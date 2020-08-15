//
// Created by jo on 2020/08/13.
//

#include "Beer.h"

Beer::Beer(string type, string brand): brand(brand), type(type){}

string Beer::getType() {
    return this->type;
}

string Beer::getBrand() {
    return this->brand;
}

