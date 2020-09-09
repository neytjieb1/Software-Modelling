#include <iostream>
#include "Pandemic.h"
#include <vector>
#include "termcolor.h"

#include "BaseImage.h"
#include "Mask.h"
#include "TemperatureCheck.h"
#include "WashHands.h"
#include "UseHandSanitiser.h"

void drawPoster(Poster *poster);

int main() {

    ////*** ***SECTION A*** ***////

    /* Pandemic* coronavirus = new Pandemic("Covid-19", 1);
     cout << coronavirus->getName() << " at " << coronavirus->getLevel() << endl << endl;

     for (int i = 0; i < 5; ++i) {
         coronavirus->increaseLevel();
         coronavirus->takeAction();
         cout << endl;
     }
     cout << coronavirus->getName() << " at " << coronavirus->getLevel() << endl << endl;
     for (int i = 0; i < 6; ++i) {
         coronavirus->decreaseLevel();
         coronavirus->takeAction();
         cout << endl;
     }
     cout << endl << coronavirus->getName() << " at " << coronavirus->getLevel() << endl << endl;

     for (int i = 0; i < 6; ++i) {
         coronavirus->increaseLevel();
         coronavirus->takeAction();
         cout << endl;
     }*/


    ////*** ***SECTION B*** ***////
    BaseImage *poster = new BaseImage(15, 50);

    /*ImageAddOns *deco1 = new Mask(new ImageElement(15, 50));
    TemperatureCheck* deco2 = new TemperatureCheck(new ImageElement(15,50));
    UseHandSanitiser* deco3 = new UseHandSanitiser(new ImageElement(15,50));*/
    WashHands* deco4 = new WashHands(new ImageElement());
    ImageAddOns* deco1 = new Mask(new TemperatureCheck( new ImageElement()));


    //poster->addImage(deco1);
    /*poster->addImage(deco2);
    poster->addImage(deco3);*/
    poster->addImage(deco4);

    poster->drawPoster();


    return 0;

}
