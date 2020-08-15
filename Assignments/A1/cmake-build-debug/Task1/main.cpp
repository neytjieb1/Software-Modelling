#include <iostream>
#include "Predator.h"
#include "Prey.h"
#include "Lion.h"
#include "Wolf.h"
#include "Cheetah.h"
#include "WildDog.h"

using namespace std;

int pHP = 15;
string pType = "Wildebeest";
double pDam = 5.0;

void resetPrey(Prey &p) {
    p.setHP(pHP);
    p.setType(pType);
    p.setDamage(pDam);
}

int main() {
    Prey prey = Prey(pHP,pType, pDam);

    /*Lion* lion = new Lion(13, 5, "his bow and arrow");
    lion->setSpeciality("claws");
    lion->hunt(prey);
    resetPrey(prey);
    lion->hunt(prey);*/

    /*Cheetah* cheetah = new Cheetah(11,4,"bewitching voice");
    cheetah->setSpeciality("teeth");
    cheetah->hunt(prey);
    resetPrey(prey);*/

/*    Wolf* wolf = new Wolf(8,2,"parkour skills");
    wolf->setSpeciality("nails");
    wolf->hunt(prey);
    resetPrey(prey);*/

    WildDog* wildDog = new WildDog(6,3,"quadrille-dancing abilities");
    wildDog->setSpeciality("tail");
    wildDog->hunt(prey);
    resetPrey(prey);
//    wildDog->hunt(prey)












    return 0;
}
