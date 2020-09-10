#include <iostream>
#include "Pandemic.h"
#include <vector>
#include "termcolor.h"

#include "BaseImage.h"
#include "Mask.h"
#include "TemperatureCheck.h"
#include "WashHands.h"
#include "UseHandSanitiser.h"

#include <string>
void drawPoster(Poster *poster);

int main() {

    ////*** ***SECTION A*** ***////

    Pandemic *coronavirus = new Pandemic("Covid-19", 1);
    cout << coronavirus->getName() << " at " << coronavirus->getLevel() << endl << endl;


    coronavirus->decreaseLevel();
    cout << coronavirus->getName() << " at " << coronavirus->getLevel() << endl << endl;
    for (int i = 0; i < 5; ++i) {
        coronavirus->increaseLevel();
        coronavirus->takeAction();
        cout << endl;
    }




    /*cout << coronavirus->getName() << " at " << coronavirus->getLevel() << endl << endl;
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
    /*Poster* test_poster;
    Poster* e1 = new Mask();
    e1->addImage(new UseHandSanitiser());
    e1->addImage(new TemperatureCheck());
    e1->addImage(new WashHands());
    e1->addImage(new ImageElement(5, Green));
    test_poster = new BaseImage(5);
    test_poster->addImage(e1);
    test_poster->drawPoster();*/


    ////*** ***SECTION C*** ***////
    /*cout << "\n\nCLONE\n\n";

    Poster* t= test_poster->clone();
    t->setColor(Blue);
    t->drawPoster();

    delete test_poster;*/


    return 0;

}
