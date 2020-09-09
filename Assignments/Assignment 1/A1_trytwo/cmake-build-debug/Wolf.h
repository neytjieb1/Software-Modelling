//
// Created by jo on 2020/08/18.
//

#ifndef A1_TRYTWO_WOLF_H
#define A1_TRYTWO_WOLF_H
#include "Predator.h"

class Wolf: public Predator {
private:
    double initDamage;
public:
    bool catchPrey(Prey *p) override;

    bool getAttacked(Prey *p) override;

    bool attack(Prey *p) override;

    void die() override;

    void speciality() override;

    Wolf();

    Wolf(int HP, double damage, string method="", string special="");

    Wolf(string method, string special);

    ~Wolf();
};


#endif //A1_TRYTWO_WOLF_H
