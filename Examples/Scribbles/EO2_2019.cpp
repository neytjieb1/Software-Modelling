//
// Created by jo on 2020/09/23.
//

#include <iostream>
#include <cmath>
using namespace std;

class RoundSR {
public:
    RoundSR(double r) : radius(r) {};
    double getRadius() {return radius;};

private:
    double radius;
};

class SquareSR {
public:
    SquareSR(double w) : width(w) {};
    double getWidth() {return width;};
private:
    double width;
};

class SquareSRCalculator : public RoundSR{
public:
    SquareSRCalculator(SquareSR* r) : RoundSR(r->getWidth()*sqrt(2)/2.0) {
        rivet = r;
    };
    double getRadius() {
        return RoundSR::getRadius();
    };


private:
    SquareSR* rivet;
};


int main() {

    SquareSR* rivet = new SquareSR(2.0);
    SquareSRCalculator sr(rivet);
    sr.getRadius();

    return 0;
};