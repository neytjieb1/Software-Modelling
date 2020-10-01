//
// Created by jo on 2020/09/14.
//

#ifndef A3_PRISONER_H
#define A3_PRISONER_H
#include "Human.h"
#include "Subject.h"

enum Direction {Up, Down, Left, Right};

class Prisoner: public Human, public Subject  {
public:
    Prisoner(double x, double y) : Human('P',x,y), Subject() {};
    void setX(double x) override {
        Human::setX(x);
        Subject::notify();
    };
    void setY(double y) override {
        Human::setY(y);
        Subject::notify();
    };
    void runTowards(Direction direction) {
        switch (direction) {
            case Up:
                setY(getY()-1);
                break;
            case Down:
                setY(getY()+1);
                break;
            case Left:
                setX(getX()-1);
                break;
            case Right:
                setX(getX()+1);
                break;
        }
    }

private:

};


#endif //A3_PRISONER_H
