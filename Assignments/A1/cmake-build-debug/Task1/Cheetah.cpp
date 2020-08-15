//
// Created by jo on 2020/08/12.
//

#include "Cheetah.h"
#include "Predator.h"

bool Cheetah::catchPrey(Prey *p) {
    cout << "The cheetah sprints forward with its eye on the " << p->getType() << endl;
    return p->run();
}

bool Cheetah::getAttacked(Prey *p) {
    if (catchPrey(p)) {
        int damage = p->fight();
        //right?
        if (damage > 0) {
            cout << "The " << p->getType() << "sidesteps the cheetah, kicks back and causes " << p->getDamage() << " damage in the process."<<endl;
            this->setHp(this->getHP() - damage);
        }
    }
    if (this->getHP() <= 0) {
        this->setDamage(this->initDamage);
        return true;
    } else return false;

}

bool Cheetah::attack(Prey *p) {
    cout << "The cheetah causes " << this->getDamage() << " damage to the " << p->getType() << " by using " << this->getPrimHuntMethod() << "."<<endl;
    if ((p->takeDamage(this->getDamage())) <= 0) {
        this->setDamage(this->initDamage);
        return true;
    } else return false;
}

void Cheetah::die() {
    cout << "The hunter becomes the hunted." << endl;
    this->setDamage(this->initDamage);

}

void Cheetah::speciality() {
    if (this->getHP() < 5) {
        this->setDamage(this->getDamage() * 1.1);
        cout << "The tired cheetah uses " << this->getSpeciality() << endl;
    }
}

Cheetah::Cheetah() {
    this->initDamage = this->getDamage();
    cout << "Constructor(Default): Cheetah" << endl;
}

Cheetah::Cheetah(int HP, double damage, string method, string special) : Predator(HP, method, damage, special) {
    cout << "Constructor(Copy): Cheetah" << endl;
}
