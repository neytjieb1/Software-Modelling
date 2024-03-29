//
// Created by jo on 2020/08/12.
//

#include "Wolf.h"


Wolf::Wolf() {
    cout << "Constructor(Default): Wolf" << endl;
}

Wolf::Wolf(string method, string special): Predator(8, method, 2, special, "Wolf") {
    cout << "Constructor(Copy 1): Wolf" << endl;
}


Wolf::Wolf(int HP, double damage, string method, string special) : Predator(HP, method, damage, special, "Wolf") {
    cout << "Constructor(Copy 2): Wolf" << endl;
}

bool Wolf::catchPrey(Prey *p) {
    cout << "The wolf sneaks up to the " << p->getType() << endl;
    return p->run();
}

bool Wolf::getAttacked(Prey *p) {
    //assumption: prey is caught
    if (p->fight() == 0) {
        cout << "The " << p->getType() << " doesn't fight" << endl;
        return false; }
    else {
        cout << "The " << p->getType() << " spots the wolf, jumps onto it’s back imposing " << p->getDamage() << endl;
        this->setHp(this->getHP() - p->getDamage());
        return (this->getHP() <= 0);
    }
}

bool Wolf::attack(Prey *p) {
    cout << "The wolf's " << this->getPrimHuntMethod() << " caused " << this->getDamage() << " damage to the " << p->getType()
         << endl;
    return (p->takeDamage(this->getDamage()) <= 0);
}

void Wolf::die() {
    cout << "Why so afraid of the big bad wolf?" << endl;
}

void Wolf::speciality() {
    cout << "The wolf cunningly uses " << this->getSpeciality() << endl;
    this->setDamage(this->getDamage() * 1.1);
}

Wolf::~Wolf() {
    cout << "Wolf object destroyed"<<endl;
}

