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

/*    Pandemic *coronavirus = new Pandemic("Covid-19", 0);
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
    Poster* e[4];
    e[1] = new Mask();
    e[1]->addImage(new ImageElement(5, Green));

    e[2] = new UseHandSanitiser();
    e[2]->addImage(new ImageElement(5, Blue));
    
    e[3] = new TemperatureCheck();
    e[3]->addImage(new ImageElement(5, Yellow));    
    
    e[4] = new WashHands();
    e[4]->addImage(new ImageElement(5, Orange));
    
    Poster* test_poster = new BaseImage(5);
    for (int i = 1; i < 5; ++i) {
        test_poster->addImage(e[i]);
    }
    test_poster->drawImageElements();
    test_poster->drawPoster();


    ////*** ***SECTION C*** ***////

    //TESTING CLONE
    /*cout << "\n\nCLONE\n";
    Poster* t= test_poster->clone();
    t->setColor(Blue);
    t->drawPoster();
    delete test_poster;*/

    //TESTING PROTOTYPES
    /*PosterPrototype* proto[6];
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
    }*/

    //TESTING INTEGRATED PRODUCT
    /*Pandemic *coronavirus = new Pandemic("Covid-19", 0);
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

    return 0;

}
