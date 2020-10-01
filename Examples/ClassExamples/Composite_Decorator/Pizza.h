//
// Created by jo on 2020/09/08.
//

#ifndef COMPOSITE_DECORATOR_PIZZA_H
#define COMPOSITE_DECORATOR_PIZZA_H


//
//  Pizza.cpp
//
//
//  Created by Linda Marshall on 2017/08/20.
//
//
#import <iostream>

using namespace std;

class Pizza {
public:
    Pizza() {
        cost = 0.0;
    };
    virtual void add(Pizza*) = 0;
    virtual double total() = 0;
    void setCost(double cost) {
        this->cost = cost;
    };
    double getCost() {
        return cost;
    };
    virtual ~Pizza() {} ;
private:
    double cost;
};

class PizzaBase : public Pizza {
public:
    PizzaBase() {};
    virtual void add(Pizza*) {};
    virtual double total() {
        return getCost();
    };
    ~PizzaBase() {};
};

class ThinPizzaBase : public PizzaBase {
public:
    ThinPizzaBase() {
        cout << "Creating a thin base" << endl;
        setCost(15.00);
    };

};

class ThickPizzaBase : public PizzaBase {
public:
    ThickPizzaBase() {
        cout << "Creating a thick base" << endl;
        setCost(25.00);
    };
};

class PizzaTopping : public Pizza {
public:
    PizzaTopping() {
        topping = nullptr;
    };
    virtual double total() {
        // cout << "In PizzaTopping total" << endl;
        if (topping == nullptr) {
            return getCost();
        } else {
            return getCost() + topping->total();
        }
    };
    virtual void add(Pizza* pizzaTopping) {
        cout << "In PizzaTopping add" << endl;
        if (topping == nullptr){
            topping = pizzaTopping;
        } else {
            topping->add(pizzaTopping);
        }

    };
protected:
    ~PizzaTopping() { delete topping; };
private:
    Pizza* topping;
};

class TomatoTopping : public PizzaTopping {
public:
    TomatoTopping() : PizzaTopping() {
        cout << "Creating tomato topping" << endl;
        setCost(5.00);
    };
    ~TomatoTopping() {};
};

class MozerallaTopping : public PizzaTopping {
public:
    MozerallaTopping() : PizzaTopping() {
        cout << "Creating Mozeralla topping" << endl;
        setCost(10.00);
    };
    ~MozerallaTopping() {};
};

class HamTopping : public PizzaTopping {
public:
    HamTopping() : PizzaTopping() {
        cout << "Creating ham topping" << endl;
        setCost(15.00);
    };
    ~HamTopping() {};
};





#endif //COMPOSITE_DECORATOR_PIZZA_H
