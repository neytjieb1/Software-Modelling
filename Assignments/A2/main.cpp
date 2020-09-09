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
    Poster* e1;
    e1 = new Mask();
    e1->addImage(new UseHandSanitiser());
    e1->addImage(new Mask());
    e1->addImage(new ImageElement());

    Poster* e2;
    e2 = new UseHandSanitiser();
    e2->addImage(new ImageElement());
    e2->addImage(new ImageElement());

    Poster* e3 = new WashHands();
    e3->addImage(new ImageElement());

    Poster* poster = new BaseImage();
    poster->addImage(e1);
    poster->addImage(e2);
    poster->addImage(e3);

    for (int i = 0; i < 5; ++i) {
        Poster* e = new WashHands();
        e->addImage(new ImageElement());
        poster->addImage(e);
    }

    poster->drawPoster();

    delete e1;
    delete e2;
    delete poster;

    return 0;

}
