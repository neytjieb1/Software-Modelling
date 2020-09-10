//
// Created by jo on 2020/09/01.
//

#ifndef A_WASHHANDS_H
#define A_WASHHANDS_H
#include "ImageAddOns.h"

class WashHands : public ImageAddOns {
public:
    WashHands() : ImageAddOns() {
        readFile("/home/jo/CLionProjects/Software-Modelling/Assignments/A2/washHands_pic.txt");
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
    ~WashHands() {};
};

#endif //A_WASHHANDS_H
