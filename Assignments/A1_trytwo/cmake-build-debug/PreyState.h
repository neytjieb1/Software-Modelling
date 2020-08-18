//
// Created by jo on 2020/08/18.
//

#ifndef A1_TRYTWO_PREYSTATE_H
#define A1_TRYTWO_PREYSTATE_H
#include <iostream>
using namespace std;

class PreyState {
private:
    int HP;
    string type;
    int damage;
public:
    PreyState();
    PreyState(int hp, string type,  int dam);
    int getHP() const;
    string getType() const;
    double getDamage() const;

};


#endif //A1_TRYTWO_PREYSTATE_H
