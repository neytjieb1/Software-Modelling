//
// Created by jo on 2020/08/12.
//

#include "WildDog.h"
#include "Predator.h"

WildDog::WildDog() {
    cout << "Constructor(Default): Wild Dog" << endl;
}

WildDog::WildDog(int HP, double damage, string method, string special) : Predator(HP, method, damage, special) {
    cout << "Constructor(Copy): Wild Dog" << endl;
}

bool WildDog::catchPrey(Prey *p) {
    cout << "The wild dog howls as it measures up the " << p->getType() << endl;
    return p->run();
}

bool WildDog::getAttacked(Prey *p) {
    //assumption: prey is caught
    bool killed = false;
    if (p->fight() == 0) { return killed; }
    else {
        cout << "The " << p->getType() << " rams into the wild dog removing " << p->getDamage() << " health points" << endl;
        this->setHp(this->getHP() - p->getDamage());
        return (this->getHP() <= 0);
    }
}

bool WildDog::attack(Prey *p) {
    cout << "The wild dog's " << this->getPrimHuntMethod() << " pays off, leaving its " << p->getType() << " with "
         << this->getDamage() << "health points less." << endl;
    return ( p->takeDamage(this->getDamage()) <= 0);
}

void WildDog::die() {
    cout << "No more hunting for this old dog" << endl;
}

void WildDog::speciality() {
    cout << "The wild dog plays dead before using " << this->getSpeciality() << endl;
    this->setDamage(this->getDamage()*1.1);
}

