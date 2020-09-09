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
    void addLine(string line) override;
    void addImage(Poster *i) override;
    void drawPoster() override;

protected:
    Poster* addOn;
    ~ImageAddOns();
    void readFile(string filename);
    vector<string> lines;

private:
    Poster* topping;
};


#endif //A_IMAGEADDONS_H
