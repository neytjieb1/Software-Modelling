//
// Created by jo on 2020/09/01.
//

#ifndef A_MASK_H
#define A_MASK_H
#include "ImageAddOns.h"

class Mask : public ImageAddOns{
public:
    Mask(Poster* image);
    ~Mask();
    void drawPoster() override;
    string getFilename() override {"/home/jo/CLionProjects/Software-Modelling/Assignments/A2/maskAlert.txt";};
};

#endif //A_MASK_H
