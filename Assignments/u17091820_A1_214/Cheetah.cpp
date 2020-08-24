//
// Created by jo on 2020/08/12.
//

#include "Cheetah.h"

Cheetah::Cheetah() {
    this->initDamage = this->getDamage();
    cout << "Constructor(Default): Cheetah" << endl;
}

Cheetah::Cheetah(string method, string special) : Predator(11, method, 4, special,"Cheetah") {
    cout << "Constructor(Copy 1): Cheetah" << endl;
}

Cheetah::Cheetah(int HP, double damage, string method, string special) : Predator(HP, method, damage, special, "Cheetah") {
    cout << "Constructor(Copy 2): Cheetah" << endl;
}

bool Cheetah::catchPrey(Prey *p) {
    cout << "The cheetah sprints forward with its eye on the " << p->getType() << endl;
    return p->run();
}

bool Cheetah::getAttacked(Prey *p) {
    //assumption: prey is caught
    if (p->fight() == 0) {
        cout << "The " << p->getType() << " doesn't fight" << endl;
        return false;
    } else {
        cout << "The " << p->getType() << " sidesteps the cheetah, kicks back and causes " << p->getDamage()
             << " damage in the process." << endl;
        this->setHp(this->getHP() - p->getDamage());
        return (this->getHP() <= 0);
    }
}

bool Cheetah::attack(Prey *p) {
    cout << "The cheetah causes " << this->getDamage() << " damage to the " << p->getType() << " by using "
         << this->getPrimHuntMethod() << "." << endl;
    return (p->takeDamage(this->getDamage()) <= 0);
}

void Cheetah::die() {
    cout << "The hunter becomes the hunted." << endl;
}

void Cheetah::speciality() {
    cout << "The tired cheetah uses " << this->getSpeciality() << endl;
    this->setDamage(this->getDamage() * 1.1);

}

Cheetah::~Cheetah() {
    cout << "Cheetah Object destructed" << endl;
}

