//
// Created by jo on 2020/08/12.
//

#include "WildDog.h"
#include "Predator.h"

bool WildDog::catchPrey(Prey *p) {
    cout << "The wild dog howls as it measures up the " << p->getType() << endl;
    return p->run();
}

bool WildDog::getAttacked(Prey *p) {
    if (catchPrey(p)) {
        int damage = p->fight();
        //right?
        if (damage > 0) {
            cout << "The " << p->getType() << " rams into the wild dog removing " << p->getDamage() << " health points" << endl;
            this->setHp(this->getHP() - damage);
        }
    }
    if (this->getHP() <= 0) {
        this->setDamage(this->initDamage);
        return true;
    } else return false;
}

bool WildDog::attack(Prey *p) {
    cout << "The wild dog's " << this->getPrimHuntMethod() << " pays off, leaving its " << p->getType() << " with " << this->getDamage() << "health points less." << endl;
    if ((p->takeDamage(this->getDamage())) <= 0) {
        this->setDamage(this->initDamage);
        return true;
    } else return false;
}

void WildDog::die() {
    cout << "No more hunting for this old dog" << endl;
    this->setDamage(this->initDamage);
}

void WildDog::speciality() {
    if (this->getHP() < 5) {
        this->setDamage(this->getDamage() * 1.1);
        cout << "The wild dog plays dead before using " << this->getSpeciality() << endl;
    }
}

WildDog::WildDog() {
    this->initDamage = this->getDamage();
    cout << "Constructor(Default): Wild Dog" << endl;
}

WildDog::WildDog(int HP, double damage, string method, string special) : Predator(HP, method, damage, special) {
    cout << "Constructor(Copy): Wild Dog" << endl;
}