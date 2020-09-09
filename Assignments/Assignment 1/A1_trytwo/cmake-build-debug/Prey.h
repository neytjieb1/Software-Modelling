//
// Created by jo on 2020/08/18.
//

#ifndef A1_TRYTWO_PREY_H
#define A1_TRYTWO_PREY_H
#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "PreyMemento.h"

using namespace std;
class Prey
{
private:
    double HP;
    string type;
    double damage;

public:
    Prey();
    Prey(double HP, string type, double damage);
    ~Prey();
    Prey *clone();
    double getHP();
    void setHP(double HP);
    string getType();
    void setType(string type);
    double getDamage();
    void setDamage(double damage);
    bool run();
    double fight();
    double takeDamage(double damage);
    void printInfo();

    PreyMemento* createMemento();
    void reinstateMemento(PreyMemento *mem);
};



#endif //A1_TRYTWO_PREY_H
