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

int main() {

    ////*** ***SECTION B*** ***////
    Poster* e[4];
    e[1] = new Mask();
    e[1]->addImage(new ImageElement(5, Green));

    e[2] = new UseHandSanitiser();
    e[2]->addImage(new ImageElement(5, Blue));
    
    e[3] = new TemperatureCheck();
    e[3]->addImage(new ImageElement(5, Yellow));    
    
    e[4] = new WashHands();
    e[4]->addImage(new TemperatureCheck());
    e[4]->addImage(new UseHandSanitiser());
    e[4]->addImage(new ImageElement(5, Orange));
    
    Poster* test_poster = new BaseImage(5);
    for (int i = 1; i < 5; ++i) {
        test_poster->addImage(e[i]);
    }
    test_poster->drawImageElements();
    test_poster->drawPoster();


    return 0;

}
