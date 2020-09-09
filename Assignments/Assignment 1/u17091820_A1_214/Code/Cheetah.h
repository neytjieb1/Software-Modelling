//
// Created by jo on 2020/08/18.
//

#ifndef A1_TRYTWO_CHEETAH_H
#define A1_TRYTWO_CHEETAH_H
#include "Predator.h"

class Cheetah: public Predator {
private:
    double initDamage;
public:
    bool catchPrey(Prey *p) override;

    bool getAttacked(Prey *p) override;

    bool attack(Prey *p) override;

    void die() override;

    void speciality() override;

    Cheetah();

    Cheetah(string method="", string special="");

    Cheetah(int HP, double damage, string method="", string special="");

    ~Cheetah() override;
};

#endif //A1_TRYTWO_CHEETAH_H
