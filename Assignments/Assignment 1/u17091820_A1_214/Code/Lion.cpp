//
// Created by jo on 2020/08/12.
//

#include "Lion.h"


Lion::Lion() {
    cout << "Constructor(Default): Lion" << endl;
}

Lion::Lion(string method, string special) : Predator(13,method, 5, special, "Lion") {
    cout << "Constructor(Copy 1): Lion" << endl;
}

Lion::Lion(int HP, double damage, string method, string special) : Predator(HP, method, damage, special, "Lion") {
    cout << "Constructor(Copy 2): Lion" << endl;
}


bool Lion::catchPrey(Prey *p) {
    cout << "The lion pounces into action to catch the " << p->getType() << endl;
    return p->run();
}

bool Lion::getAttacked(Prey *p) {
    if (p->fight() == 0) {
        cout << "The " << p->getType() << " doesn't fight" << endl;
        return false;
    }
    else {
        cout << "The " << p->getType() << " stands on the lions tail inflicting " << p->getDamage() << " damage!" << endl;
        this->setHp(this->getHP() - p->getDamage());
        return (this->getHP() <= 0);
    }
}

/*int damage = p->fight();
//right?
if (damage > 0) {
    cout << "The " << p->getType() << " stands on the lions tail inflicting " << damage << " damage!" << endl;
    this->setHp(this->getHP() - damage);
}
if (this->getHP() <= 0) {
this->setDamage(this->initDamage);
return true;
} else return false;*/

bool Lion::attack(Prey *p) {
    cout << "The lion uses " << this->getPrimHuntMethod() << " to inflict " << this->getDamage() << " damage on the "
         << p->getType() << endl;


    return (p->takeDamage(this->getDamage()) <= 0);
}

void Lion::die() {
    cout << "Long lived the King." << endl;
}

void Lion::speciality() {
    cout << "The injured lion uses " << this->getSpeciality() << endl;
    this->setDamage(this->getDamage() * 1.1);

}

Lion::~Lion() {
    cout << "Lion object destroyed" << endl;
}




