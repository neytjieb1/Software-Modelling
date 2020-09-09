//
// Created by jo on 2020/08/18.
//

#include "PreyState.h"

PreyState::PreyState() {

}

PreyState::PreyState(int hp, string type, int dam) : HP(hp), type(type), damage(dam) {}


int PreyState::getHP() const {
    return this->HP;
}

string PreyState::getType() const {
    return this->type;
}

double PreyState::getDamage() const {
    return this->damage;
}

