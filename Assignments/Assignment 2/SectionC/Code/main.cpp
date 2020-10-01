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

    ////*** ***SECTION C*** ***////
    cout << "\n======================CREATING ORIGINAL====================\n";
    Poster* e;
    e = new Mask();
    e->addImage(new ImageElement(3, Green));
    e->addImage(new ImageElement(3, Blue));
    e->addImage(new ImageElement(3, Orange));
    Poster* test_poster = new BaseImage(3);
    test_poster->addImage(e);
    test_poster->drawImageElements();
    test_poster->drawPoster();

    //TESTING CLONE
    cout << "\n======================TESTING CLONE====================\n";
    Poster* t= test_poster->clone();
    t->setColor(Blue);
    t->drawPoster();
    delete test_poster;

    //TESTING PROTOTYPES
    cout << "\n======================TESTING PROTOTYPE====================\n";
    PosterPrototype* proto[6];
    proto[0] = new Level0Proto();
    proto[1] = new Level1Proto();
    proto[2] = new Level2Proto();
    proto[3] = new Level3Proto();
    proto[4] = new Level4Proto();
    proto[5] = new Level5Proto();


    for (int i = 0; i < 6; ++i) {
        cout << "\n\n"<< i << "\n\n";
        Poster* test_poster = proto[i]->clone();
        test_poster->drawPoster();
        delete test_poster;
    }

    //TESTING INTEGRATED PRODUCT
    cout << "\n======================TESTING INTEGRATED PRODUCT====================\n";
    Pandemic *coronavirus = new Pandemic("Covid-19", 0);
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
    }

    return 0;

}
