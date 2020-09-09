//
// Created by jo on 2020/09/01.
//

#include "TemperatureCheck.h"


TemperatureCheck::TemperatureCheck() {
    readFile("/home/jo/CLionProjects/Software-Modelling/Assignments/A2/tempCheck.txt");
}

TemperatureCheck::~TemperatureCheck() {
}

void TemperatureCheck::drawPoster() {
    //cout << termcolor::reset << termcolor::green ;
    for (string l: lines) {
        addLine(l);
    }
    ImageAddOns::drawPoster();
}
