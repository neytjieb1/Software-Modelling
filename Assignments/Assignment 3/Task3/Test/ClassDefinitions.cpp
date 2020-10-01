//
// Created by jo on 2020/09/28.
//

#include "ClassDefinitions.h"

ConcreteIterator::ConcreteIterator() {
    this->currIndex = -1;
    lStruct = nullptr;
    /*this->maxNumElements = -1;
    this->elements = nullptr;*/
}

template<class T>
ConcreteIterator::ConcreteIterator(LinearStructure<T> *linearStruct) {
    this->currIndex = 0;        //no need to make -1 as warning since isEmpty will always check before using array
    this->lStruct = linearStruct;
    /*this->maxNumElements = lStruct->getSize();
    this->elements = lStruct->getElements();*/
}

int ConcreteIterator::current() {        //just return element at the current index
    return this->lStruct->get(currIndex); //automatically throws error within linear struct
}

bool ConcreteIterator::hasNext() {
    if (lStruct->isEmpty()) return false;           //empty
    else return (currIndex != lStruct->getNumElements() - 1);     //reached end yet?
}

void ConcreteIterator::next() {      //moves to next element
    if (hasNext()) {
        ++currIndex;
        if (verbose) cout << "Moving to next value: " << this->lStruct->get(currIndex) << endl;
    } else {
        throw "No next value";
    }
}

void ConcreteIterator::first() {
    this->currIndex = 0;
    if (verbose) cout << "First: " << this->lStruct->get(currIndex) << endl;
}


void ConcreteIterator::traverseStruct(bool fromStart) {        //prints out all elements in the structure
    cout << "Elements in the Structure " << (fromStart ? "from start" : "from the last value") << endl;
    if (fromStart) {
        this->currIndex = 0;
    }
    while (this->hasNext()) {
        cout << this->current() << " ";
        this->next();
    }
    cout << endl;
}



