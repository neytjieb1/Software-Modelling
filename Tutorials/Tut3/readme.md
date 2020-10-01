##Tutorial 3

###Q1
1.1 

    Component: Graphic
    Leaf: Ellipse
    Composite: CompositeGraphic
    
Correct

1.2

    Rectangle is-a Graphic  //correct
    Circle is-a Graphic     //incorrect. Circle is a special case of Ellipse
    GraphicDecorator has-a Graphic and is-a Graphic //correct. Similar to Composite Graphic
    
NB! Remember that Composite and ConcreteDecorator are similar
                     


1.3

    list<Graphic *> _l;
    
    void CompositeGraphic::addGraphic(Graphic *g) {
        _l.push_back(g);                     //NB! Remember is a pointer
    } 
    
NB: 1. Return Type
    2. Scope resolution
    3. parameters
    4. Returning correctly 
   
    void CompositeGraphic::print() {
        for (Graphic* g: l) {
            g->print();
        }
    }
    
NB: Use STL libraries when using STL-classes because . So make use of an iterator
    
addGraphic is pure virtual in Graphic class

Correct:
void CompositeGraphic::print() { 
// 1 mark
std::cout<<"["; // Not necessary
for (std::list<Graphic*>::iterator it = _l.begin(); 
it != _l.end(); ++it)
// 4 marks for loop statement
(*it)->print();              
// 2 marks
std::cout<<"]"; // Not necessary
}
    
1.4

    a) 1..* --> at least one instance
    No, it would not be sufficient. The list must contain at least one graphic element, so _l must be initialised
    with at least one element upon instantiation of a CompositeGraphic object. 
    We could theoretically always add a first graphic as a prototype/placeholder, but that would be weird

correct answer    

    b) CompositeGraphic::CompositeGraphic(Graphic* g) {
        _l.push_back(g);
    }
        // is this enough?
        
Correct answer
CompositeGraphic::CompositeGraphic(Graphic* g) : Graphic(), _l() {      //NB NB -- SHOULD HAVE CONSTRUCTED (But not necessary?)
			addGraphic(g);
    
###Q2

2.1
    
    See Screenshot

2.2

    Graphic* myGraphic;
    myGraphic = new Label();
    myGraphic->add(new Box());
    myGraphic->add(new Ellipse());

Correct: Graphic* g = new Box(
         		new Label(
         		new Ellipse(1,1,6,10),"Label string"),"Box string");
    
NB NB NB ! Ellipse constructor

###Q3

3.1 
    
    Observer     //correct
    
3.2
    
    Subject: Graphic                //correct
    ConcreteSubject: Ellipse, CompositeGraphic      //correct
    Observer: View                  //correct
    ConcreteObserver: CAD_View, Tree_View           //correct
    
###Q5

5.1

    Composite
    - Component: Graphic                //correct
    - Composite: CompositeGraphic       //correct
    - Leaf: Ellipse                     //correct
    
    Iterator
    - Iterator: Iterator                                //correct
    - ConcreteIterator: GraphicIterator                 //correct
    - Aggregate: Graphic                                //correct
    - ConcreteAggregate: Ellipse, CompositeGraphic      //correct
    
5.2 

No. //incorrect
It is not Iterator because the access/iteration has not been separated from the class hierarchy itself //incorrect
aggregate is specifying traversal and not the iterator

Yes, iterating from the aggregate


5.3

    GraphicIterator* CompositeGraphic::createIterator() {   //NOT void!!!!
        return new GraphicIterator(this);
    }
    
//correct
    
5.4

    1. //how is this supposed to look? 
    Maybe: 
    if (nextStack.empty()) cout << "empty";
    else cout << Assert.AreEqual(start, nextStack[0]);
    
    //why do we do dynamic casting?
    
    2. nextStack.pop();         //correct
    3. nextStack.push(rit);     //NOT eg 
    4. return nextStack.isEmpty(); //correct
    5. return nextStack.top();      //correct

1. Just push


5.5

    

    