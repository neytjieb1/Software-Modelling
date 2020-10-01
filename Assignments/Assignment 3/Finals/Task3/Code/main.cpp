//
// Created by jo on 2020/09/15.
//

#include <iostream>
#include "ClassDefinitions.h"
using namespace std;

int main() {
    
    int size = 10;
    LinearStructure<int>* array = new DynamicArray<int>(size);
    Iterator<int> *arrIterator = array->createIterator();
    //Checking that traverseStruct works with empty data structures
    arrIterator->traverseStruct();
    arrIterator->traverseStruct(false);

    //Insert elements
    for (int i = 0; i < 6; ++i) {
        array->insert(i, i+1);
    }
    
    //Traverse the structure with a default value of true
    arrIterator->traverseStruct();
    array->insert(6,7);
    //Traverse the struct from the current value onwards
    arrIterator->traverseStruct(false);
    array->insert(7,8);
    //Traverse the struct from the start
    arrIterator->traverseStruct();
    //Traverse the struct from the current value
    arrIterator->traverseStruct(false);
    arrIterator->setVerbose(true);
    arrIterator->first();



    return 0;
}
