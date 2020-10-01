//
// Created by jo on 2020/08/27.
//

#ifndef ABSTRACTFACTORY_FACTORY_H
#define ABSTRACTFACTORY_FACTORY_H
#include "Sweet.h"

class SweetsFactory {
public:
    virtual Chocolate* produceChocolate() = 0;
    virtual HardSweet* produceSweet() = 0;
    virtual ~SweetsFactory();
};

class BarOneSparkleFactory : public SweetsFactory{
public:
    Chocolate* produceChocolate() override {
        return new BarOne();
    }

    HardSweet* produceSweet() override {
        return new Sparkle();
    }
};

class TexFizzPopFactory : public SweetsFactory {
public:
    Chocolate* produceChocolate() override {
        return new Tex();
    }

    HardSweet* produceSweet() override {
        return new FizzPop();
    }
};

#endif //ABSTRACTFACTORY_FACTORY_H
