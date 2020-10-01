#include <iostream>
#include "Prisoner.h"
#include "BorderGuard.h"
#include "PrisonArea.h"


int main() {
    // Prison Area Initialisation
    
    PrisonArea *prisonArea = new PrisonArea(10, 6);
    prisonArea->print();

    //Prisoner takes  steps to the right
    cout << "RIGHT RIGHT RIGHT RIGHT" << endl;
    for (int i = 0; i < 4; ++i) {
        prisonArea->getPrisoner()->runTowards(Right);
    }
    prisonArea->print();

    //Prisoner takes an illegal step to the right and is pushed back
    cout << "RIGHT" << endl;
    prisonArea->getPrisoner()->runTowards(Right);
    prisonArea->print();


    //Different direction: Prisoner now takes 3 steps up and 6 steps to the left
    cout << "\n\nUP AND LEFT" << endl;
    for (int i = 0; i < 3; ++i) {
        prisonArea->getPrisoner()->runTowards(Up);
        prisonArea->getPrisoner()->runTowards(Left);
        prisonArea->getPrisoner()->runTowards(Left);
    }
    prisonArea->print();
    //Prisoner attempts to take an illegal step up
    cout << "UP" << endl;
    prisonArea->getPrisoner()->runTowards(Up);
    prisonArea->print();


    delete prisonArea;

    return 0;

}
