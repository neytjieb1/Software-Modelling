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
    virtual ~Beer();
private:
    string type;
    string brand;
};




#endif //TUT1_BEER_H
