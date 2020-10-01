//
// Created by jo on 2020/09/14.
//

#ifndef A3_BORDERGUARD_H
#define A3_BORDERGUARD_H
#include "Human.h"
#include "Observers.h"
#include "Prisoner.h"

class BorderGuard: public Human, public Observers {
public:
    BorderGuard(Prisoner* prisoner, double x, double y) : Human('B', x, y) , Observers(){ //should also be 'X'?
        this->mPrisoner = prisoner;
        mPrisoner->attach(this);
    };
    void update() override;

private:
    Prisoner* mPrisoner;
};


#endif //A3_BORDERGUARD_H
