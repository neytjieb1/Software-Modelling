//
// Created by jo on 2020/08/12.
//

#ifndef A1_PREDATOR_H
#define A1_PREDATOR_H

#include <string>
#include "Predator.h"
#include "Prey.h"

using namespace std;

class Predator {
public:
    Predator();
    Predator(int hp, string prim, double dam, string spec);
    void setHp(int hp);
    void setPrimHuntMethod(const string &primHuntMethod);
    void setDamage(double damage);
    void setSpeciality(const string &speciality);
    int getHP() const;
    string getPrimHuntMethod() const;
    double getDamage() const;
    string getSpeciality() const;
    virtual ~Predator();
    void printInfo();

    void hunt(Prey &);
    virtual bool catchPrey(Prey *p) = 0;
    virtual bool getAttacked(Prey *p) = 0;
    virtual bool attack(Prey *p) = 0;
    virtual void die() = 0;
    virtual void speciality() = 0;

private:
    int HP;
    string primHuntMethod;
    double damage;
    string specialSkill;
};


#endif //A1_PREDATOR_H
