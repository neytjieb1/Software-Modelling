//
// Created by jo on 2020/08/12.
//

#include "Predator.h"

using namespace std;

void Predator::setHp(int hp) {
    HP = hp;
}

void Predator::setPrimHuntMethod(const string &primHuntMethod) {
    Predator::primHuntMethod = primHuntMethod;
}

void Predator::setDamage(double damage) {
    Predator::damage = damage;
}

void Predator::setSpeciality(const string &speciality) {
    specialSkill = speciality;
}

int Predator::getHP() const {
    return HP;
}

string Predator::getPrimHuntMethod() const {
    return primHuntMethod;
}

double Predator::getDamage() const {
    return damage;
}

string Predator::getSpeciality() const {
    return specialSkill;
}

Predator::Predator() {
    cout << "Constructor(Default): Predator" << endl;
}

Predator::Predator(int hp, string prim, double dam, string spec) {
    cout << "Constructor(Copy): Predator" << endl;
    this->HP = hp;
    this->primHuntMethod = prim;
    this->damage = dam;
    this->specialSkill = spec;
}

Predator::~Predator() {
    cout << "Destructor: Predator" << endl;
}

void Predator::hunt(Prey& p) {
    cout << "\nInitial" << endl;
    while (this->getHP() > 0 && p.getHP() > 0) {
        this->printInfo();
        p.printInfo();

        if (this->getHP() < 5) {
            this->speciality();
        }

        if (this->catchPrey(&p)) {      //prey is caught
            if (this->getAttacked(&p)) {
                this->die();
            } else {
                this->attack(&p);
            }
        } else {
            this->setHp(this->getHP() - 1);
        }
    }
}

void Predator::printInfo() {
    cout << "Predator:\tHP " << HP << "\tDamage: " << damage << endl;
}

PredatorMemento* Predator::createMemento() {
    auto* mem = new PredatorMemento();
    mem->setState(this->state);
    return mem;
}

void Predator::setMemento(PredatorMemento* mem) {
    this->state = mem->getState();
}

