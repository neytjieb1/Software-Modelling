//
// Created by jo on 2020/08/14.
//

#ifndef TUT1_BEERCASE_H
#define TUT1_BEERCASE_H
#include "Bottle.h"
#include "Memento.h"

class beerCase {
private:
    Bottle* state_BottlesInside;
public:
    Memento createMemento();
    void setMemento(Memento memento);

};


#endif //TUT1_BEERCASE_H
