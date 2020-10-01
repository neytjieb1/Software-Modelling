//
// Created by jo on 2020/08/27.
//

#include "Sweet.h"
#include <iostream>
using namespace std;

int choc_total = 0;
int hard_total = 0;

Chocolate::Chocolate() {
    this->id = choc_total++;
}

void Chocolate::wrap() {

}

void BarOne::print() {
    cout << "BarOne" << endl;
}

void Tex::print() {
    cout << "Tex" << endl;
}

HardSweet::HardSweet() {
    this->id = hard_total++;
}


void HardSweet::wrap() {
    print();
    cout << this->id << ": wrap" << endl;
}
