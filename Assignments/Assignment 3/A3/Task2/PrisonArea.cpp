//
// Created by jo on 2020/09/14.
//

#include "PrisonArea.h"

PrisonArea::PrisonArea(double width, double height) : mWidth(width), mHeight(height) {
    mPrisoner = new Prisoner(width / 2, height / 2);

    mBorderGuards.push_back(new BorderGuard(mPrisoner, mWidth, 0)); //automatically attaches
    mBorderGuards.push_back(new BorderGuard(mPrisoner, mWidth, mHeight));
    mBorderGuards.push_back(new BorderGuard(mPrisoner, 0, 0));
    mBorderGuards.push_back(new BorderGuard(mPrisoner, 0, mHeight));
}

PrisonArea::~PrisonArea() {
    while (mBorderGuards.size()!=0){
        mBorderGuards.pop_back();
    }
    delete mPrisoner;
}


void PrisonArea::print() {
    for (int y = 0; y < mHeight+1; ++y) {
        for (int x = 0; x < mWidth+1; ++x) {
            char val = '-';
            if (x == mPrisoner->getX() && y == mPrisoner->getY()) {
                val = mPrisoner->getValue();
            }
            else {
                for (int i = 0; i < 4; ++i) {
                    if (x == mBorderGuards[i]->getX() && y == mBorderGuards[i]->getY()) {
                        val = mBorderGuards[i]->getValue();
                        break;
                    } else if (x == mBorderGuards[i]->getX() || y == mBorderGuards[i]->getY()) {
                        val = '*';
                    }
                }
            }
            cout << val;
        }
        cout<< endl;
    }
}

void PrisonArea::printGuards() {
    cout << "Height: " << mHeight << "\tWidth: " << mWidth << endl;
    for (int i = 0; i < 4; ++i) {
        cout << mBorderGuards[i]->getValue() << " x:" << mBorderGuards[i]->getX() << "\ty: "<<mBorderGuards[i]->getY();
        cout << endl;
    }

}


