//
// Created by jo on 2020/09/01.
//

#ifndef A_TEMPERATURECHECK_H
#define A_TEMPERATURECHECK_H
#include "ImageAddOns.h"

class TemperatureCheck: public ImageAddOns {
public:
    TemperatureCheck() {
        readFile("/home/jo/CLionProjects/Software-Modelling/Assignments/A2/temp_gun_pic.txt");
    } ;
    ~TemperatureCheck() {};
    void drawPoster() override {
        ImageAddOns::drawPoster();
    };
    void drawImageElements() override {
        for (string l: lines) {
            addLine(l);
        }
        ImageAddOns::drawImageElements();
    }
};


#endif //A_TEMPERATURECHECK_H
