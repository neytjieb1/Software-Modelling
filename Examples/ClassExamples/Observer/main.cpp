#include "Observer.h"
#include "Subject.h"


int main() {

    RacingCar* car[2];
    car[0] = new RacingCar("Ferrari One");
    car[1] = new RacingCar("Ferrari Two");

    PitStop* ferrariWorkshop = new FerrariStop();
//  FerrariStop* ferrariWorkshop = new FerrariStop();

    ferrariWorkshop->setCar(car[0]);
    ferrariWorkshop->setCar(car[1]);

    printWorkshopStatus(ferrariWorkshop);

/*
  for (int i = 0; i < 10; i++) {
    car[0]->go();

    printWorkshopStatus(ferrariWorkshop);
  }
*/

    PitCrew* refueller = new Refueller();
    refueller->setCar(2);
    ferrariWorkshop->attach(refueller);

    PitCrew* tyreMech = new TyreChanger();
    ferrariWorkshop->attach(tyreMech);


    ferrariWorkshop->race();

    return 0;
}