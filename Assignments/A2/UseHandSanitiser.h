//
// Created by jo on 2020/09/01.
//

#ifndef A_USEHANDSANITISER_H
#define A_USEHANDSANITISER_H
#include "ImageAddOns.h"

class UseHandSanitiser : public ImageAddOns{
public:
    UseHandSanitiser(Poster* );
    ~UseHandSanitiser();
    void drawPoster() override;

};


#endif //A_USEHANDSANITISER_H
