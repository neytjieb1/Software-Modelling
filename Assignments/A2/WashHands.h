//
// Created by jo on 2020/09/01.
//

#ifndef A_WASHHANDS_H
#define A_WASHHANDS_H
#include "ImageAddOns.h"

class WashHands : public ImageAddOns{
public:
    void drawPoster() override;
    WashHands(Poster* image) ;
    ~WashHands();
    string getFilename() override {"/home/jo/CLionProjects/Software-Modelling/Assignments/A2/washhands.txt";};
};


#endif //A_WASHHANDS_H
