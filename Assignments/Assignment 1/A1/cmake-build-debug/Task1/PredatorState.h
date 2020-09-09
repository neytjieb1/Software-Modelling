//
// Created by jo on 2020/08/15.
//

#ifndef A1_STATE_H
#define A1_STATE_H
#include <string>
using namespace std;
#include "Predator.h"

class PredatorState {
private:
    int HP;
    string primHuntMethod;
    double damage;
    string speciality;
public:
    PredatorState();
    PredatorState(int , string, double , string);
    int getHP() const;
    string getPrimHuntMethod() const;
    double getDamage() const;
    string getSpeciality() const;
};


#endif //A1_STATE_H
