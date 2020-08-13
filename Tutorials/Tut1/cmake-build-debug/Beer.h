//
// Created by jo on 2020/08/13.
//

#ifndef TUT1_BEER_H
#define TUT1_BEER_H
#include <iostream>
using namespace std;

class Beer {
public:
    Beer(string, string);
    string getType();
    string getBrand();

private:
    string type;
    string brand;
};

Beer::Beer(string t, string b) {
    this->type = t;
    this->brand = b;
}

string Beer::getType() {
    return this->type;
}

string Beer::getBrand() {
    return this->brand;
}


#endif //TUT1_BEER_H
