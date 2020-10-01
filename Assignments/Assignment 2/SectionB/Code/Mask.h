//
// Created by jo on 2020/09/01.
//

#ifndef A_MASK_H
#define A_MASK_H
#include "ImageAddOns.h"

class Mask : public ImageAddOns {
public:
    Mask() : ImageAddOns() {
        readFile("/home/jo/CLionProjects/Software-Modelling/Assignments/A2/mask_pic.txt");
    }
    void drawPoster() override {
        ImageAddOns::drawPoster();
    }
    void drawImageElements() override {
        for (string l: lines) {
            addLine(l);
        }
        ImageAddOns::drawImageElements();
    }
    ~Mask() {};


};

#endif //A_MASK_H
