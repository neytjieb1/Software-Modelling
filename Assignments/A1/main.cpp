#include <iostream>
#include "Predator.h"
#include "Prey.h"
#include "Lion.h"
#include "Wolf.h"
#include "Cheetah.h"
#include "WildDog.h"

using namespace std;

int pHP = 10;
string pType = "Wildebeest";
double pDam = 5.0;

void resetPrey(Prey &p) {
    p.setHP(pHP);
    p.setType(pType);
    p.setDamage(pDam);
}

int main() {
    Lion* lion = new Lion(13, 5, "his bow and arrow");
    Cheetah* cheetah = new Cheetah(11,4,"bewitching voice");
    Wolf* wolf = new Wolf(8,2,"parkour skills");
    WildDog* wildDog = new WildDog(6,3,"quadrille-dancing abilities");
    Prey prey = Prey(pHP,pType, pDam);

    lion->setSpeciality("claws");
    cheetah->setSpeciality("teeth");
    wolf->setSpeciality("nails");
    wildDog->setSpeciality("tail");

    lion->hunt(prey);
    resetPrey(prey);
    cheetah->hunt(prey);
    resetPrey(prey);
    wolf->hunt(prey);
    resetPrey(prey);
    wildDog->hunt(prey);





    return 0;
}
