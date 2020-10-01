//
// Created by jo on 2020/09/15.
//

#ifndef A3_DYNAMICARRAY_H
#define A3_DYNAMICARRAY_H
using namespace std;
#include <iostream>
#include <string>

#include "LinearStructure.h"

//Forward Declare


template<class T>
class Iterator {
public:
    virtual void first() = 0;
    virtual void next() = 0;
    virtual bool hasNext() = 0;
    virtual int current() = 0;
    virtual void traverseStruct(bool = true) = 0;
    void reset() {
        currIndex = (currIndex!=-1 ? 0 : -1);
    };
    void setVerbose(bool wordliness) {verbose = wordliness;};

protected:
    int currIndex;
    LinearStructure<T>* lStruct;
    bool verbose = false;
    /*int maxNumElements;
    T** elements;*/

};


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



template class Iterator<int>;
template class DynamicArray<int>;

#endif //A3_DYNAMICARRAY_H
