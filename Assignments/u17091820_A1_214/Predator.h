//
// Created by jo on 2020/08/18.
//

#ifndef A1_TRYTWO_PREDATOR_H
#define A1_TRYTWO_PREDATOR_H

#include <string>
#include "Prey.h"
#include "PredatorMemento.h"

using namespace std;

class Predator {
public:
    Predator();

    Predator(int hp, string prim, double dam, string spec, string type);

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

    void hunt(Prey *, bool = false);

    virtual bool catchPrey(Prey *p) = 0;

    virtual bool getAttacked(Prey *p) = 0;

    virtual bool attack(Prey *p) = 0;

    virtual void die() = 0;

    virtual void speciality() = 0;

    PredatorMemento *createMemento();

    void setMemento(PredatorMemento *mem);

    const string &getType() const;

    void setType(const string &type);
private:
    int HP;
    string primHuntMethod;
    double damage;
    string specialSkill;

    double initDamage;
    string type;
};


#endif //A1_TRYTWO_PREDATOR_H
