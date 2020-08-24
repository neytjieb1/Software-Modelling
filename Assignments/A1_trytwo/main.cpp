#include <assert.h>
#include "cmake-build-debug/Prey.h"
#include "cmake-build-debug/Lion.h"
#include "cmake-build-debug/Cheetah.h"
#include "cmake-build-debug/Wolf.h"
#include "cmake-build-debug/WildDog.h"
#include "cmake-build-debug/LionFactory.h"
#include "cmake-build-debug/CheetahFactory.h"
#include "cmake-build-debug/WolfFactory.h"
#include "cmake-build-debug/WildDogFactory.h"


int main()
{
    Predator** p;
    Prey *prey;
    /************************************************************/
    /************************** TASK 1 **************************/
    /************************************************************/

    /*p = new Predator *[4];
    p[0] = new Lion("Lion Hunting", "Lion Special");
    p[1] = new Cheetah("Cheetah Hunting", "Cheetah Special");
    p[2] = new Wolf("Wolf Hunting", "Wolf Special");
    p[3] = new WildDog("WildDog Hunting", "WildDog Special");
    prey = new Prey(15, "Bok", 10);

    cout << "" << endl;

    for (int i = 0; i < 4; i++)
    {
        p[i]->catchPrey(prey);
        cout<<"HP before: " << p[i]->getHP() << endl;
        p[i]->getAttacked(prey);
        cout<<"HP after: " << p[i]->getHP() << endl;
        cout<<"HP before: " << prey->getHP() << endl;
        p[i]->attack(prey);
        cout<<"HP after: " << prey->getHP() << endl;
        p[i]->die();
        p[i]->speciality();
        cout << endl;
    }



    // Memory free
    delete prey;
    for (int i = 0; i < 4; i++)
        delete p[i];

    p[0] = new Lion("Lion Hunting", "Lion Special");
    prey = new Prey(15, "Bok", 10);
    p[0]->hunt(prey);
    delete prey;
    delete p[0];

    delete[] p;
    p = nullptr;
    prey = nullptr;
    cout << endl; */

    /************************************************************/
    /************************** TASK 2 **************************/
    /************************************************************/
    PredatorFactory **pf;
/*
    p = new Predator *[4];
    prey = new Prey(15, "Bok", 10);
    pf = new PredatorFactory *[4];
    pf[0] = new LionFactory();
    pf[1] = new CheetahFactory();
    pf[2] = new WolfFactory();
    pf[3] = new WildDogFactory();
    cout << endl;

    for (int i = 0; i < 4; i++)
    {
        p[i] = pf[i]->createPredator("Hunting Method", "Speciality");
        p[i]->catchPrey(prey);
        p[i]->getAttacked(prey);
        p[i]->attack(prey);
        p[i]->die();
        p[i]->speciality();
        cout << endl;
    }

    // Memory free
    for (int i = 0; i < 4; i++)
    {
        delete p[i];
        delete pf[i];
    }
    delete[] p;
    delete prey;
    delete[] pf;
    p = nullptr;
    prey = nullptr;
    pf = nullptr;
    cout << endl;
*/

    /************************************************************/
    /************************** TASK 3 **************************/
    /************************************************************/

    /**
     * NB: Assertions are used here to test code, if an assertion fails, please check your clone method.
     */

/*    prey = new Prey(15, "Bok", 10);
    Prey *clonedPrey = prey->clone();
    cout << endl;

    assert(prey != clonedPrey);

    cout<<"Original ";
    prey->printInfo();
    cout<<"Clone " ;
    clonedPrey->printInfo();
    cout << endl;

    assert(prey->getHP() == clonedPrey->getHP());
    assert(prey->getDamage() == clonedPrey->getDamage());
    assert(prey->getType() == clonedPrey->getType());

    prey->setHP(5);
    prey->setDamage(5);
    prey->setType("Buffalo");

    cout<<"Original ";
    prey->printInfo();
    cout<<"Clone " ;
    clonedPrey->printInfo();
    cout << endl;

    assert(prey->getHP() != clonedPrey->getHP());
    assert(prey->getDamage() != clonedPrey->getDamage());
    assert(prey->getType() != clonedPrey->getType());

    delete clonedPrey;
    delete prey;
    clonedPrey = nullptr;
    prey = nullptr;
    cout << endl;*/

    /************************************************************/
    /************************** TASK 4 **************************/
    /************************************************************/

    /*prey = new Prey(15, "Bok", 10);
    p = new Predator *[1];
    pf = new PredatorFactory *[1];
    pf[0] = new LionFactory();

    p[0] = pf[0]->createPredator("Lions Hunting Method", "Lions Speciality");
    p[0]->hunt(prey);
    cout << (p[0]->getHP() > 0 ? "Predator Wins" : "Prey Wins") << endl;

    delete p[0];
    delete pf[0];
    delete[] p;
    delete prey;
    delete[] pf;
    p = nullptr;
    prey = nullptr;
    pf = nullptr;
    cout << endl;*/

    return 0;
}