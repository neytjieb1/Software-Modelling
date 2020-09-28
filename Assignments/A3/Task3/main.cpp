//
// Created by jo on 2020/09/15.
//

#include <iostream>
#include "DynamicArray.h"
#include "ConcreteIterator.h"
using namespace std;

/*int main() {
    int size = 10;
    LinearStructure<int>* array = new DynamicArray<int>(size);
    Iterator<int> *arrIterator = array->createIterator();
    //Checking that traverseStruct works with empty data structures
    //arrIterator->traverseStruct();
    //arrIterator->traverseStruct(false);

    for (int i = 0; i < 6; ++i) {
        array->insert(i, i+1);
    }


    arrIterator->traverseStruct();
    array->insert(6,7);
    arrIterator->traverseStruct(false);
    array->insert(7,8);
    arrIterator->traverseStruct();
    arrIterator->traverseStruct(false);
    arrIterator->setVerbose(true);
    arrIterator->first();



    return 0;
}
*/