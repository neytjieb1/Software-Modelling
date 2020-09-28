//
// Created by jo on 2020/09/22.
//

#ifndef A3_CONCRETEITERATOR_H
#define A3_CONCRETEITERATOR_H
#include "Iterator.h"
#include "DynamicArray.h"
#include <iostream>
using namespace std;

class ConcreteIterator : public Iterator<int> {
public:
    template<class T> friend class DynamicArray;
    void first() override;
    void next() override;
    bool hasNext() override;
    int current() override;
    void traverseStruct(bool fromStart = true) override;

protected:
    template<class T> explicit ConcreteIterator(LinearStructure<T>* linearStruct);
    ConcreteIterator();

};


#endif //A3_CONCRETEITERATOR_H