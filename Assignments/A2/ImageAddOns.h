//
// Created by jo on 2020/09/01.
//

#ifndef A_IMAGEADDONS_H
#define A_IMAGEADDONS_H
#include "Poster.h"
#include "ImageElement.h"

#include <fstream>
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

class ImageAddOns : public Poster{
public:
    ImageAddOns();
    ImageAddOns(Poster *imageElement);
    void drawPoster() override;
    ~ImageAddOns();
    virtual string getFilename() = 0;
    string fillAndPad(string line,int end);

protected:
    Poster* addOn;

};


#endif //A_IMAGEADDONS_H
