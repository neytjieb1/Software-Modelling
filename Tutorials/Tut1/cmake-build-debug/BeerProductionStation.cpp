//
// Created by jo on 2020/08/13.
//

#include "BeerProductionStation.h"

Bottle *BeerProductionStation::produce(string brand) {
    Beer* keg;

    keg = brew(brand);
    Bottle* Case = new Bottle[24];

    for (int i = 0; i < 24; ++i) {
        bottle(keg, &Case[i]);
        cap(&Case[i]);
        label(&Case[i]);
    }
    return Case;
}

void BeerProductionStation::bottle(Beer *beer, Bottle *bottle) {
    cout << "Putting some " << beer->getType() << "into a bottle";
    bottle->setBeerInside(beer);

}
