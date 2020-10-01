//
// Created by jo on 2020/08/27.
//

#ifndef ABSTRACTFACTORY_SHAPE_H
#define ABSTRACTFACTORY_SHAPE_H
#include <iostream>
#include <cmath>
using namespace std;

//double PI = 3.14159265359;

class Shape {
public:
    Shape(double len) {
        id_ = total_++;
        length = len;
    }
    virtual double perimeter() = 0; // To be implemented
    virtual double area() = 0; // To be implemented
    virtual void draw() = 0;
    virtual ~Shape() {};
protected:
    int id_ = 0;
    inline static int total_ = 0;
    double length;
};

//int Shape::total_ = 0;

class AngularShape : public Shape {
public:
    AngularShape(double len) : Shape(len) {};
    void draw() {
        cout << "Angular Shape " << id_ << ": draw" << endl;
    }
    virtual ~AngularShape() {};
    virtual double perimeter() = 0;
    virtual double area()  = 0;
};

class RoundedShape : public Shape {
public:
    RoundedShape(double len) : Shape(len) {};
    void draw() {
        cout << "Rounded Shape " << id_ << ": draw" << endl;
    }
    virtual ~RoundedShape() {};
    virtual double perimeter() = 0;
    virtual double area()  = 0;
};

class Circle : public RoundedShape {
public:
    Circle(double radius) : RoundedShape(radius){} ;

    void draw() {
        RoundedShape::draw();
        cout << "circle " << id_ << ": draw" << endl;
    }
    double perimeter() override {
        return this->length*2*M_PI;
    }
    double area() override {
        return M_PI*length*length;
    };
};

class Square : public AngularShape {
public:
    Square(double len) : AngularShape(len) {};
    void draw() {
        AngularShape::draw();
        cout << "square " << id_ << ": draw" << endl;
    }
    double perimeter() override {
        return this->length*4;
    }
    double area() override {
        return length*length;
    }

};

class Ellipse : public RoundedShape {
public:
    void draw() {
        RoundedShape::draw();
        cout << "ellipse " << id_ << ": draw" << endl;
    }
    Ellipse(double shortLen, double longLen) : RoundedShape(shortLen) {
        this->longLen = longLen;
    }
    double perimeter() override {
        return M_PI*(3*(longLen + length) - sqrt((3*longLen + length)*(longLen + 3*length)));
    }
    double area() override {
        return M_PI*longLen*length;
    }

private:
    double longLen;
};
class Rectangle : public AngularShape {
public:
    Rectangle(double shortLen, double longLen) : AngularShape(shortLen) {
        this->longLen = longLen;
    }
    void draw() {
        AngularShape::draw();
        cout << "rectangle " << id_ << ": draw" << endl;
    }
    double perimeter() override {
        return 2*(longLen+length);
    }
    double area() override {
        return longLen*length;
    }

private:
    double longLen;
};

#endif //ABSTRACTFACTORY_SHAPE_H
