#include <assert.h>
#include "Prey.h"
#include "Lion.h"
#include "Cheetah.h"
#include "Wolf.h"
#include "WildDog.h"
#include "LionFactory.h"
#include "CheetahFactory.h"
#include "WolfFactory.h"
#include "WildDogFactory.h"
#include "PredatorStore.h"
#include "PreyStore.h"

#include <random>

int main() {
    srand(123456789);
    Predator **p;
    Prey *prey;
    /************************************************************/
    /************************** TASK 1 **************************/
    /************************************************************/

    p = new Predator *[4];
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

    cout << "TESTING GETTERS AND SETTERS" << endl;
    for (int j = 0; j < 10; ++j) {
        int i = rand() % 4;
        p[i]->printInfo();

        p[i]->setHp(rand()%10);
        p[i]->setDamage(rand()%15);
        p[i]->setPrimHuntMethod("changed Hunting Method");
        p[i]->setSpeciality("changed speciality");

        p[i]->printInfo();
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
    cout << endl;

    /************************************************************/
    /************************** TASK 2 **************************/
    /************************************************************/
    PredatorFactory **pf;
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

    /************************************************************/
    /************************** TASK 3 **************************/
    /************************************************************/

    /**
     * NB: Assertions are used here to test code, if an assertion fails, please check your clone method.
     */

    prey = new Prey(15, "Bok", 10);
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
    cout << endl;

    /************************************************************/
    /************************** TASK 4 **************************/
    /************************************************************/

    prey = new Prey(15, "Bok", 10);
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
    cout << endl;


    /************************************************************/
    /************************** TASK 5 **************************/
    /************************************************************/

    cout << "==============================TASK 5==============================" << endl;

    cout << "CONSTRUCTION OF OBJECTS " << endl;

    Predator **hunter = new Predator *[4];
    hunter[0] = new Lion("Lion Hunting", "Lion Special");
    hunter[1] = new Cheetah("Cheetah Hunting", "Cheetah Special");
    hunter[2] = new Wolf("Wolf Hunting", "Wolf Special");
    hunter[3] = new WildDog("WildDog Hunting", "WildDog Special");
    //hunter[1]->setHp(hunter[1]->getHP()+1)


    cout << endl << "4.3 STORING MEMENTOS" << endl;

    PredatorStore **predatorStore = new PredatorStore *[4];
    for (int i = 0; i < 4; ++i) {
        predatorStore[i] = new PredatorStore();
        predatorStore[i]->storeMemento(hunter[i]->createMemento());
    }

    Prey **hunted = new Prey *[2];
    hunted[0] = new Prey(15, "Bok", 10);
    hunted[1] = new Prey(9, "Wildebeest", 5);
    PreyStore **preyStore = new PreyStore *[4];
    for (int i = 0; i < 2; ++i) {
        preyStore[i] = new PreyStore();
        preyStore[i]->storeMemento(hunted[i]->createMemento());
    }

    int wins_pred[4] = {0,0,0,0};
    int wins_prey[2] = {0, 0};

    cout << endl;

    cout << "4.4 HUNTING BEGINS" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 4; ++j) {
            hunter[j]->reinstateMemento(predatorStore[j]->retreivePredatorMemento());
            hunted[i]->reinstateMemento(preyStore[i]->retreivePreyMemento());
            cout << hunter[j]->getType() << " hunts " << hunted[i]->getType() << endl;
            hunter[j]->hunt(hunted[i]);

            (hunter[j]->getHP() > 0 ? wins_pred[j]++ : wins_prey[i]++);
            cout << endl;
        }
    }

    cout << "SUMMARY " << endl;
    cout << "WINS FOR PREDATORS" << endl;
    for (int i = 0; i < 4; ++i) {
        cout << wins_pred[i] << ": " << hunter[i]->getType() <<  endl;
    }
    cout << "\nWINS FOR PREY" << endl;
    for (int i = 0; i < 2; ++i) {
        cout << wins_prey[i] << ": " << hunted[i]->getType() <<  endl;
    }

    cout << endl;


    cout << "DESTRUCTION OF OBJECTS" << endl;
    // Memory free
    for (int i = 0; i < 4; i++)
    {
        delete hunter[i];
        delete predatorStore[i];
    }
    delete[] hunter;
    delete[] predatorStore;

    for (int i = 0; i < 2; ++i) {
        delete hunted[i];
        delete preyStore[i];
    }
    delete[] hunted;
    delete[] preyStore;

    return 0;
}
