//
// Created by jo on 2020/08/18.
//

#ifndef A1_TRYTWO_PREDATORSTATE_H
#define A1_TRYTWO_PREDATORSTATE_H
#include <string>
using namespace std;


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



#endif //A1_TRYTWO_PREDATORSTATE_H
