//
// Created by jo on 2020/08/12.
//

#ifndef A1_PREDATOR_H
#define A1_PREDATOR_H

#include <string>
#include "Predator.h"
#include "Prey.h"
#include "PredatorMemento.h"
#include "PredatorState.h"

using namespace std;

class Predator {
public:
    Predator();
    Predator(int hp, string prim, double dam, string spec);
    virtual ~Predator();
    void setHp(int hp);
    void setPrimHuntMethod(const string &primHuntMethod);
    void setDamage(double damage);
    void setSpeciality(const string &speciality);
    int getHP() const;
    string getPrimHuntMethod() const;
    double getDamage() const;
    string getSpeciality() const;
    void printInfo();

    void hunt(Prey &);
    virtual bool catchPrey(Prey *p) = 0;
    virtual bool getAttacked(Prey *p) = 0;
    virtual bool attack(Prey *p) = 0;
    virtual void die() = 0;
    virtual void speciality() = 0;

    PredatorMemento* createMemento();
    void setMemento(PredatorMemento* mem);

private:
    int HP;
    string primHuntMethod;
    double damage;
    string specialSkill;
    PredatorState* state;
};


#endif //A1_PREDATOR_H
