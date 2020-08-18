//
// Created by jo on 2020/08/18.
//

#ifndef A1_TRYTWO_PREY_H
#define A1_TRYTWO_PREY_H
#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;
class Prey
{
private:
    int HP;
    string type;
    int damage;

public:
    Prey();
    Prey(int HP, string type, int damage);
    ~Prey();
    Prey *clone();
    int getHP();
    void setHP(int HP);
    string getType();
    void setType(string type);
    int getDamage();
    void setDamage(int damage);
    bool run();
    int fight();
    int takeDamage(int damage);
    void printInfo();
};



#endif //A1_TRYTWO_PREY_H
