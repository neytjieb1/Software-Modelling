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
enum Colours {Red, Orange, Yellow, Blue, Green, White};

class Poster {
public:
    Poster(int h, Colours c = White) {
        height = h;
        colour = c;};
    virtual void drawPoster() = 0;
    virtual void addLine(string line) = 0;
    virtual void addImage(Poster* i) = 0;
    virtual void drawImageElements() = 0;
    virtual void setColor(Colours c) = 0;
    virtual Poster* clone() = 0;
    Colours getColour() {return colour;};
    void setHeight(int h) {height = h;};
    int getHeight() {return height;};
    virtual ~Poster() {};

private:
    int height;

protected:
    Colours colour;
    char borderPixel = 'x';
};


#endif //A_POSTER_H
