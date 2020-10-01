//
// Created by jo on 2020/08/27.
//

#ifndef ABSTRACTFACTORY_SHAPESABSTRACTFACTORY_H
#define ABSTRACTFACTORY_SHAPESABSTRACTFACTORY_H
#include "Shape.h"
#include <iostream>

using namespace std;

class Factory {
public:
    virtual Shape* createCurvedInstance(double longLen, double shortLen=0) = 0;
    virtual Shape* createStraightInstance(double longLen, double shortLen=0) = 0;
    virtual ~Factory() {};
};

class BoxShapeFactory : public Factory {
public:
    Shape* createCurvedInstance(double longLen, double shortLen=0) {
        return new Circle(longLen);
    }
    Shape* createStraightInstance(double longLen, double shortLen=0) {
        return new Square(longLen);
    }
};

class ElongatedShapeFactory : public Factory {
public:
    Shape* createCurvedInstance(double longLen, double shortLen)   {
        return new Ellipse(longLen, shortLen);
    }
    Shape* createStraightInstance(double longLen, double shortLen) {
        return new Rectangle(longLen, shortLen);
    }
};




#endif //ABSTRACTFACTORY_SHAPESABSTRACTFACTORY_H
