//
// Created by jo on 2020/08/14.
//

#include "BeerCase.h"

Memento beerCase::createMemento() {
    Memento* m = new Memento();
//    m.setState();
    return *m;
}

void beerCase::setMemento(Memento memento) {

}
