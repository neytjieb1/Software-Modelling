#include <vector>
#include "Decorator.h"
#include "Prototype.h"

using  namespace std;


int main() {

    //TESTING DRAWING. WORKS PERFECTLY
    /*Poster* test_poster;
    Poster* e1 = new Mask();
    e1->addImage(new UseHandSanitiser());
    e1->addImage(new TemperatureCheck());
    e1->addImage(new WashHands());
    e1->addImage(new ImageElement(5, Green));
    test_poster = new BaseImage(5);
    test_poster->addImage(e1);
    test_poster->drawPoster();*/

    //Poster* t= test_poster->clone();
    //t->drawPoster();

    delete test_poster;

    /*PosterPrototype* proto[6];
    proto[0] = new Level0Proto();
    proto[1] = new Level1Proto();
    proto[2] = new Level2Proto();
    proto[3] = new Level3Proto();
    proto[4] = new Level4Proto();
    proto[5] = new Level5Proto();


    test_poster = proto[5]->clone();
    cout << "\nIntermediary\n"<< endl;
    test_poster->drawPoster();
    delete test_poster;

    */








    return 0;

}
