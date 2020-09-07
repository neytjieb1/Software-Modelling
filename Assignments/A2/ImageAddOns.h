//
// Created by jo on 2020/09/01.
//

#ifndef A_IMAGEADDONS_H
#define A_IMAGEADDONS_H
#include "Poster.h"

class ImageAddOns : public Poster{
public:
    ImageAddOns(Poster *imageElement);
    virtual void drawPoster(Poster* );
    ~ImageAddOns();

protected:
    Poster* addOn;

};


#endif //A_IMAGEADDONS_H
