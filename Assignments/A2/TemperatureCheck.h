//
// Created by jo on 2020/09/01.
//

#ifndef A_TEMPERATURECHECK_H
#define A_TEMPERATURECHECK_H
#include "ImageAddOns.h"

class TemperatureCheck: public ImageAddOns {
public:
    TemperatureCheck() ;
    ~TemperatureCheck();
    void drawPoster() override;
};


#endif //A_TEMPERATURECHECK_H
