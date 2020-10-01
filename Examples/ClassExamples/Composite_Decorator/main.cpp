#include <iostream>
#include "SalesOrder.h"
#include "SomeClass.h"
#include "SalesTicket.h"
using namespace std;
#include "GraphicMemory.h"
#include "Pizza.h"

/*int main(){
    Ellipse* e1 = new Ellipse(42, 51, 69);
    Ellipse* e2 = new Ellipse(16, 64, 86);
    Ellipse* e3 = new Ellipse(1, 33, 7);
    CompositeGraphic* g1 = new CompositeGraphic();
    CompositeGraphic g2;
    g1->addGraphic(e1);
    g1->addGraphic(e2);
    g2.addGraphic(e3);
    g2.addGraphic(g1);
    std::cout<<"g1 = "<<std::endl;
    g1->print();
    std::cout<<"g2 = "<<std::endl;
    g2.print();
    /*
      g2 is on the stack and therefore not necessary to explicitly call delete for the structure.
     */
    /*return 0;
}*/


/*

 g2
 |-1-> e3
 |-2-> g1
	   |-2.1-> e1
	   |-2.2-> e2

 */



/*int main() {
    Component* basicTicket = new CardTicket;
    //SalesTicket* basicTicket = new SalesTicket;
    SomeClass* theBottom = new Footer1(basicTicket);
    //SalesOrder* s = new SalesOrder(theBottom);
    SalesOrder* s = new SalesOrder(new Header1(new Footer1(new CardTicket)));
    // Note: SalesTicket is being decorated.

    s->printTicket();

    // Destruct all relevant objects
    delete s;

    return 0;
}*/
/*
 Example of output:

 Welcome to the Crazy Zone
 Cash Sale Ticket
 It was a pleasure doing business with you

 */
#include <vector>
int main() {
    vector<int> values;
    values.push_back(985);
    values.push_back(420);
    values.push_back(396);
    vector<string>::iterator it;
    for(vector<int>::iterator it = values.begin(); it!=values.end(); ++it) {
        cout << *it << endl;
    }

    /*Pizza* myPizza;
    myPizza = new TomatoTopping();
    myPizza->add(new MozerallaTopping());
    myPizza->add(new HamTopping());
    myPizza->add(new HamTopping());
    myPizza->add(new ThickPizzaBase());
    cout << "Cost = " << myPizza->total() << endl;


    delete myPizza;

    return 0;*/
}

/* Program output:

 Creating tomato topping
 Creating Mozeralla topping
 In PizzaTopping add
 Creating ham topping
 In PizzaTopping add
 In PizzaTopping add
 Creating ham topping
 In PizzaTopping add
 In PizzaTopping add
 In PizzaTopping add
 Creating a thick base
 In PizzaTopping add
 In PizzaTopping add
 In PizzaTopping add
 In PizzaTopping add
 Cost = 70

 */
