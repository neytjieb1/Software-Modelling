//
// Created by jo on 2020/09/04.
//

#ifndef COMPOSITE_DECORATOR_GRAPHICMEMORY_H
#define COMPOSITE_DECORATOR_GRAPHICMEMORY_H

#include <iostream>
#include <list>


class Graphic {
public:
    /// Print out the Graphic
    virtual void print() = 0;

    // Will ensure well-behaved deletion if no anonymous objects.
    virtual ~Graphic(){
        std::cout << "Deleting" << std::endl;
    };
};

class CompositeGraphic: public Graphic {
public:
    CompositeGraphic() : Graphic(), _l() {}

    /// Add a child
    void addGraphic(Graphic* g) {
        _l.push_back(g);
    }

    /// Remove a child
    void removeGraphic(Graphic* g);

    void print(){
        // for each child ...
        for (std::list<Graphic*>::iterator it =
                _l.begin();
             it != _l.end();
             ++it)
            (*it)->print(); // ... print it
    }

    // Added so that delete is called for all children. This will delete anonymous objects as well.
    ~CompositeGraphic() {
        for (std::list<Graphic*>::iterator it =
                _l.begin();
             it != _l.end();
             ++it)
            delete *it;
    }

private:
    /// children
    std::list<Graphic*> _l;
};

class Ellipse: public Graphic {
public:
    /// Build an ellipse with the specified
    // coordinates and radius
    Ellipse(int x, int y, unsigned radius)
            : Graphic(), _x(x), _y(y), _r(radius) {}

    virtual void print() {
        std::cout << "Ellipse("
                  << _x << ", "
                  << _y << ", "
                  << _r << ")"
                  << std::endl;
    }

private:
    int _x;
    int _y;
    unsigned _r;
};



#endif //COMPOSITE_DECORATOR_GRAPHICMEMORY_H
