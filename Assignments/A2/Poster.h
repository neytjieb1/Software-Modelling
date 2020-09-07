//
// Created by jo on 2020/09/01.
//

#ifndef A_POSTER_H
#define A_POSTER_H
#include "termcolor.h"
#include <iostream>
using namespace std;

class ImageAddOns;

class Poster {
public:
    Poster() : height(0), width(0) {};
    void setHeight(int h) {height = h;};
    void setWidth(int h) {width = h;};
    int getHeight() {return height;};
    int getWidth() {return width;};
    virtual void drawPoster() = 0;

protected:
    Poster(int height, int width) {
        if (height!=0) {
            this->height = height;
        }
        if (width!=0) {
            this->width = width;
        }
    }
    int height = 0;
    int width = 0;
    char borderPixel = 'x';

};


#endif //A_POSTER_H
