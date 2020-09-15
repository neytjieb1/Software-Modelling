//
// Created by jo on 2020/09/14.
//

#include "Human.h"

Human::Human(char value, double x, double y)
{
    mValue = value;
    mX = x;
    mY = y;
}

char Human::getValue()
{
    return this->mValue;
}

void Human::setValue(char value)
{
    mValue = value;
}

void Human::setX(double x)
{
    mX = x;
}

void Human::setY(double y)
{
    mY = y;
}

double Human::getX()
{
    return mX;
}

double Human::getY()
{
    return mY;
}