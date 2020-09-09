//
// Created by jo on 2020/09/01.
//

#ifndef A_USEHANDSANITISER_H
#define A_USEHANDSANITISER_H
#include "ImageAddOns.h"

class UseHandSanitiser : public ImageAddOns{
public:
    UseHandSanitiser(Poster* image);
    ~UseHandSanitiser();
    void drawPoster() override;
    string getFilename() override {"/home/jo/CLionProjects/Software-Modelling/Assignments/A2/sanitiser.txt";};

};


#endif //A_USEHANDSANITISER_H
