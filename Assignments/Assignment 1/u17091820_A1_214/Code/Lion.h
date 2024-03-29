//
// Created by jo on 2020/08/18.
//

#ifndef A1_TRYTWO_LION_H
#define A1_TRYTWO_LION_H
#include "Predator.h"


class Lion: public Predator {
private:
    double initDamage;
public:
    bool catchPrey(Prey *p) override;

    bool getAttacked(Prey *p) override;

    bool attack(Prey *p) override;

    void die() override;

    void speciality() override;

    Lion();

    Lion(int HP, double damage, string method="", string special="");

    Lion(string method="", string special="");

    ~Lion();
};



#endif //A1_TRYTWO_LION_H
