#include <iostream>
#include "Pandemic.h"
#include <vector>

// #include "BaseImage.h"
// #include "Mask.h"
// #include "TemperatureCheck.h"
// #include "WashHands.h"
// #include "UseHandSanitiser.h"

#include <string>

int main() {

    ////*** ***SECTION A*** ***////

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
