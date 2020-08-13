//
// Created by jo on 2020/08/12.
//

#include "Lion.h"
#include "Predator.h"


bool Lion::catchPrey(Prey *p) {
    cout << "The lion pounces into action to catch the " << p->getType() << endl;
    return p->run();
}

bool Lion::getAttacked(Prey *p) {
    if (catchPrey(p)) {
        int damage = p->fight();
        //right?
        if (damage > 0) {
            cout << "The " << p->getType() << " stands on the lions tail inflicting " << damage << " damage!" << endl;
            this->setHp(this->getHP() - damage);
        }
    }
    if (this->getHP() <= 0) {
        this->setDamage(this->initDamage);
        return true;
    } else return false;
}

bool Lion::attack(Prey *p) {
    cout << "The lion uses " << this->getPrimHuntMethod() << " to inflict " << this->getDamage() << " damage on the "
         << p->getType() << endl;
    if ((p->takeDamage(this->getDamage())) <= 0) {
        this->setDamage(this->initDamage);
        return true;
    } else return false;
}

void Lion::die() {
    cout << "Long lived the King." << endl;
    this->setDamage(this->initDamage);
}

void Lion::speciality() {
    if (this->getHP() < 5) {
        this->setDamage(this->getDamage() * 1.1);
        cout << "The injured lion uses " << this->getSpeciality() << endl;
    }
}

Lion::Lion() {
    this->initDamage = this->getDamage();
    cout << "Constructor(Default): Lion" << endl;
}

Lion::Lion(int HP, double damage, string method, string special):Predator(HP, method, damage, special) {
    cout << "Constructor(Copy): Lion" << endl;
}

