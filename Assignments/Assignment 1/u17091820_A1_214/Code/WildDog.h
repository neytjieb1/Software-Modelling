//
// Created by jo on 2020/08/18.
//

#ifndef A1_TRYTWO_WILDDOG_H
#define A1_TRYTWO_WILDDOG_H
#include "Predator.h"

class WildDog: public Predator {
private:
    double initDamage;
public:
    bool catchPrey(Prey *p) override;

    bool getAttacked(Prey *p) override;

    bool attack(Prey *p) override;

    void die() override;

    void speciality() override;

    WildDog();

    WildDog(string method, string special);

    WildDog(int HP, double damage, string method="", string special="");

    ~WildDog() override;
};

#endif //A1_TRYTWO_WILDDOG_H
