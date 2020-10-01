//
// Created by jo on 2020/09/01.
//

#ifndef A_USEHANDSANITISER_H
#define A_USEHANDSANITISER_H
#include "ImageAddOns.h"

class UseHandSanitiser : public ImageAddOns{
public:
    UseHandSanitiser() {
        readFile("/home/jo/CLionProjects/Software-Modelling/Assignments/A2/sanitiser_pic.txt");
    };
    void drawPoster() override {
        ImageAddOns::drawPoster();
    };
    void drawImageElements() override {
        for (string l: lines) {
            addLine(l);
        }
        ImageAddOns::drawImageElements();
    }
    ~UseHandSanitiser() {};


};


#endif //A_USEHANDSANITISER_H
