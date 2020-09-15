//
// Created by jo on 2020/09/14.
//

#include "BorderGuard.h"


void BorderGuard::update() {
    if (mPrisoner->getX()==this->getX()) {
        cout << "Blow the whistle" << endl;
        if (mPrisoner->getX() == 0) mPrisoner->runTowards(Right);
        else mPrisoner->runTowards(Left);
    }
    //since else if we have only that one of two coordinates will move. What about both?
    else if (mPrisoner->getY()==this->getY()) {
        cout << "Blow the whistle" << endl;
        if (mPrisoner->getY()==0) mPrisoner->runTowards(Down);
        else mPrisoner->runTowards(Up);
    }


}
