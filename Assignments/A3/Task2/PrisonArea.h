//
// Created by jo on 2020/09/14.
//

#ifndef A3_PRISONAREA_H
#define A3_PRISONAREA_H
#include "Prisoner.h"
#include "BorderGuard.h"
#include <iostream>
using namespace std;

class PrisonArea {
public:
    PrisonArea(double width, double height);
    ~PrisonArea() ;
    double getWidth() {return mWidth;};
    double getHeight() {return mHeight;};
    Prisoner* getPrisoner() {return mPrisoner;};
    void print();
    void printGuards();

private:
    double mWidth;
    double mHeight;
    Prisoner* mPrisoner;
    vector<BorderGuard*> mBorderGuards;
};


#endif //A3_PRISONAREA_H
