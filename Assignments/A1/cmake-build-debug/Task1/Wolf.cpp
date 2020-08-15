//
// Created by jo on 2020/08/12.
//

#include "Wolf.h"
#include "Predator.h"

bool Wolf::catchPrey(Prey *p) {
    cout << "The wolf sneaks up to the " << p->getType() << endl;
    return p->run();
}

bool Wolf::getAttacked(Prey *p) {
    if (catchPrey(p)) {
        int damage = p->fight();
        //right?
        if (damage > 0) {
            cout << "The " << p->getType() << " spots the wolf,jumps onto it’s back imposing " << p->getDamage() << endl;
            this->setHp(this->getHP() - damage);
        }
    }
    if (this->getHP() <= 0) {
        this->setDamage(this->initDamage);
        return true;
    } else return false;
}

bool Wolf::attack(Prey *p) {
    cout << "The wolf's " << this->getPrimHuntMethod() << " caused " << this->getDamage() << " to the " << p->getType() << endl;
    if ((p->takeDamage(this->getDamage())) <= 0) {
        this->setDamage(this->initDamage);
        return true;
    } else return false;
}

void Wolf::die() {
    cout << "Why so afraid of the big bad wolf?" << endl;
    this->setDamage(this->initDamage);
}

void Wolf::speciality() {
    if (this->getHP() < 5) {
        this->setDamage(this->getDamage() * 1.1);
        cout << "The wolf cunningly uses " << this->getSpeciality() << endl;
    }
}

Wolf::Wolf() {
    this->initDamage = this->getDamage();
    cout << "Constructor(Default): Wolf" << endl;
}

Wolf::Wolf(int HP, double damage, string method, string special) : Predator(HP, method, damage, special) {
    cout << "Constructor(Copy): Wolf" << endl;
}
