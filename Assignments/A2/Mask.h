//
// Created by jo on 2020/09/01.
//

#ifndef A_MASK_H
#define A_MASK_H
#include "ImageAddOns.h"

class Mask : public ImageAddOns{
public:
    Mask(Poster* image) : ImageAddOns(image) {};
    ~Mask();
    void drawPoster() override;
};


#endif //A_MASK_H
