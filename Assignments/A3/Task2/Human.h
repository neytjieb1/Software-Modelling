//
// Created by jo on 2020/09/14.
//

#ifndef HUMAN_H
#define HUMAN_H
#include <iostream>
using namespace std;

class Human
{

public:

    Human(char value, double x, double y);  //changed to double so as to allow between values

    void setValue(char value);
    virtual void setX(double x);       //added virtual = 0 here
    virtual void setY(double y);           //added virtual here

    char getValue();
    double getX();
    double getY();

private:

    char mValue;
    double mX;
    double mY;

};

#endif
