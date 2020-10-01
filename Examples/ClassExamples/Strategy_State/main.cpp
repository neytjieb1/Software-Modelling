#include <iostream>

#include "State/Context.h"
#include "State/State.h"

using namespace std;

int  main() {

    Context* trafficLight = new Context();
    cout << endl;

    for (int i = 0; i < 4; ++i) {
        trafficLight->getColor();
        trafficLight->change();
        cout << endl;
    }

    cout << "Happy Days!" << endl;

    return 0;
}