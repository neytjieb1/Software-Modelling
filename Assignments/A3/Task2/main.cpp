#include <iostream>
#include "Prisoner.h"
#include "BorderGuard.h"
#include "PrisonArea.h"

int main() {
    PrisonArea *prisonArea = new PrisonArea(10, 6);
    prisonArea->print();
/*    cout << "UP UP" << endl;
    prisonArea->getPrisoner()->runTowards(Up);
    prisonArea->getPrisoner()->runTowards(Up);
    prisonArea->print();

    cout << "UP" << endl;
    prisonArea->getPrisoner()->runTowards(Up);
    prisonArea->print();*/

    cout << "RIGHT RIGHT RIGHT RIGHT" << endl;
    prisonArea->getPrisoner()->runTowards(Right);
    prisonArea->getPrisoner()->runTowards(Right);
    prisonArea->getPrisoner()->runTowards(Right);
    prisonArea->getPrisoner()->runTowards(Right);
    prisonArea->print();

    cout << "RIGHT" << endl;
    prisonArea->getPrisoner()->runTowards(Right);
    prisonArea->print();

    prisonArea->printGuards();
}
