//
// Created by jo on 2020/09/01.
//

#ifndef A_POSTER_H
#define A_POSTER_H
#include "termcolor.h"
#include <iostream>
#include <vector>
using namespace std;

class ImageAddOns;

class Poster {
public:
    Poster() {height = 0;};
    virtual void drawPoster() = 0;
    virtual void addLine(string line) = 0;
    virtual void addImage(Poster* i) = 0;
    void setHeight(int h) {height = h;};
    int getHeight() {return height;};
    virtual ~Poster() {};

private:
    int height = 0;

protected:
    char borderPixel = '|';
    int width = 30;

};


#endif //A_POSTER_H
