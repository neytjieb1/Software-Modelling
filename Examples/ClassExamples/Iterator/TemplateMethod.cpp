//
// Created by jo on 2020/08/11.
//

#include "TemplateMethod.h"
#include <iostream>
using namespace std;

TemplateMethodArrayList::TemplateMethodArrayList() {
    this->size = 0;
    this->storage = nullptr;
    this->current = 0;
    cout << "Default Constructor Template Method" << endl;
}

TemplateMethodArrayList::TemplateMethodArrayList(int size, int *storage, int curr) {
    this->size = size;
    this->storage = storage;
    this->current = curr;
    cout << "Copy Constructor Template Method" << endl;
}

void TemplateMethodArrayList::insertElement(int el) {
    cout << "Inserting " << el << endl;
}

void TemplateMethodArrayList::sort(){
    cout <<"Sorting Data" << endl;
}
bool TemplateMethodArrayList::isFull(){
    return this->size == this->current;
}
bool TemplateMethodArrayList::isEmpty(){
    return this->size==0;
}
void TemplateMethodArrayList::print() {
    cout << "Print the whole arraylist!" << endl;
}
TemplateMethodArrayList::~TemplateMethodArrayList(){
    cout << "TemplateMethodArrayList Destructor" << endl;
}


AscendingArrayList::AscendingArrayList():TemplateMethodArrayList() {
    cout << "Ascending Default Constructor" << endl;
}

AscendingArrayList::AscendingArrayList(int s, int curr, int* stor):TemplateMethodArrayList(s, stor, curr){
    cout << "Ascending Copy Constructor" << endl;
}

int AscendingArrayList::directionOperator() {
    return 1;
}

DescendingArrayList::DescendingArrayList():TemplateMethodArrayList(){
    cout << "Descending Default Constructor" << endl;
}

DescendingArrayList::DescendingArrayList(int s, int curr, int* stor):TemplateMethodArrayList(s, stor, curr){
    cout << "Descending Copy Constructor" << endl;
}

int DescendingArrayList::directionOperator() {
    return 2;
}