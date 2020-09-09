//
// Created by jo on 2020/08/15.
//

#include "PredatorState.h"

int PredatorState::getHP() const {
    return HP;
}

string PredatorState::getPrimHuntMethod() const {
    return primHuntMethod;
}

double PredatorState::getDamage() const {
    return damage;
}

string PredatorState::getSpeciality() const {
    return speciality;
}

PredatorState::PredatorState(int hp, string phm, double dam, string spec) {
    this->HP = hp;
    this->primHuntMethod = phm;
    this->damage = dam;
    this->speciality = spec;
}

/*PredatorState::PredatorState(Predator *p) {
    this->HP = p->getHP();
    this->primHuntMethod = p->getPrimHuntMethod();
    this->damage = p->getDamage();
    this->speciality = p->getSpeciality();
}*/
