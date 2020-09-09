//
// Created by jo on 2020/09/01.
//

#ifndef A_TEMPERATURECHECK_H
#define A_TEMPERATURECHECK_H
#include "ImageAddOns.h"

class TemperatureCheck: public ImageAddOns {
public:
    TemperatureCheck(Poster* image) ;
    ~TemperatureCheck();
    void drawPoster() override;
    string getFilename() override {"/home/jo/CLionProjects/Software-Modelling/Assignments/A2/tempCheck.txt";};
};


#endif //A_TEMPERATURECHECK_H
