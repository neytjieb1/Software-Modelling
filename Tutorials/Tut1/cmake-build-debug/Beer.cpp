//
// Created by jo on 2020/08/13.
//

#include "Beer.h"

Beer::Beer(string t, string b) {
    this->type = t;
    this->brand = b;
}

string Beer::getType() {
    return this->type;
}

string Beer::getBrand() {
    return this->brand;
}

