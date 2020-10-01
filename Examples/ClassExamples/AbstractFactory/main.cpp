#include <iostream>
#include "Factory.h"
#include "Sweet.h"
#include "ShapesAbstractFactory.h"
using namespace std;

/*int main() {
*//*    Factory** bigFactory = new Factory*[2];
    bigFactory[0] = new BarOneSparkleFactory();
    bigFactory[1] = new TexFizzPopFactory();
    bigFactory[0]->produceChocolate();*//*


    return 0;
}*/

int main() {
    Factory** factory  = new Factory*[2];
    factory[0] = new BoxShapeFactory;
    factory[1] = new ElongatedShapeFactory;

    Shape* shapes[4];

    shapes[0] = factory[0]->createCurvedInstance(1);
    shapes[1] = factory[0]->createStraightInstance(1);
    shapes[2] = factory[1]->createCurvedInstance(1,2);
    shapes[3] = factory[1]->createStraightInstance(1,2);

    for (int i=0; i < 4; i++) {
        shapes[i]->draw();
        cout << "area: " << shapes[i]->area() << endl;
        cout << "perimeter: " << shapes[i]->perimeter() << endl;
        cout << endl;
    }

    for (int i=0; i < 4; i++) {
        delete shapes[i];
    }

    for (int i=0; i < 2; i++) {
        delete factory[i];
    }
    delete [] factory;

    return 0;

}