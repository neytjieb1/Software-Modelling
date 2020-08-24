//
// Created by jo on 2020/08/12.
//

#include "Predator.h"

using namespace std;

Predator::Predator() {
    cout << "Constructor(Default): Predator" << endl;
    this->initDamage = 0;
}

Predator::Predator(int hp, string prim, double dam, string spec, string predType) {
    cout << "Constructor(Copy): Predator" << endl;
    this->HP = hp;
    this->primHuntMethod = prim;
    this->damage = dam;
    this->specialSkill = spec;
    this->type = predType;
    this->initDamage = dam;
}

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

Predator::~Predator() {
    cout << "Destructor: Predator" << endl;
}

void Predator::hunt(Prey *p, bool verbose) {
    if (verbose) cout << "\nInitial" << endl;
    while (this->getHP() > 0 && p->getHP() > 0) {
        if (verbose) {
            this->printInfo();
            p->printInfo();
        }

        if (this->getHP() < 5) {
            this->speciality();
            if (verbose) {
                this->printInfo();
                p->printInfo();
            }
        }

        if (this->catchPrey(p)) {      //prey is caught
            if (this->getAttacked(p)) {
                this->die();
                this->setDamage(initDamage);
                return;
            } else {
                this->attack(p);
            }
        } else {
            this->setHp(this->getHP() - 1);
        }
    }
    if (p->getHP() <=0 ) {
        cout << "The " << p->getType() << " dies" << endl;
    }
    if (this->getHP()<=0) {
        cout << "The " << this->type << " died from exhaustion" << endl;
    }
}

void Predator::printInfo() {
    cout << "Predator:\tHP " << HP << "\tDamage: " << damage << endl;
}

PredatorMemento* Predator::createMemento() {
    PredatorMemento* mem = new PredatorMemento();
    mem->setState(new PredatorState(HP, primHuntMethod, damage, specialSkill));
    return mem;
}

void Predator::setMemento(PredatorMemento* mem) {
   this->damage = mem->getState()->getDamage();
   this->HP = mem->getState()->getHP();
   this->specialSkill = mem->getState()->getSpeciality();
   this->primHuntMethod = mem->getState()->getPrimHuntMethod();
}

const string &Predator::getType() const {
    return type;
}

void Predator::setType(const string &type) {
   this->type = type;
}


