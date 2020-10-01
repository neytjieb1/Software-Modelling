#include <vector>
#include "Decorator.h"
#include "Prototype.h"

using  namespace std;


int main() {

    //TESTING DRAWING. WORKS PERFECTLY (EXCEPT FOR THE FACT THAT I MUST ALWAYS DRAW FIRST TO INITIALISE PROPERLY
    /*Poster* test_poster;
    Poster* e1 = new Mask();
    e1->addImage(new UseHandSanitiser());
    e1->addImage(new TemperatureCheck());
    e1->addImage(new WashHands());
    e1->addImage(new ImageElement(5, Green));
    e1->drawImage();
    test_poster = new BaseImage(5);
    test_poster->addImage(e1);
    //test_poster->drawPoster();

    cout << "\n\nCLONE\n\n";

    Poster* t= test_poster->clone();
    t->setColor(Blue);
    t->drawPoster();
    delete test_poster;*/

    PosterPrototype* proto[6];
    proto[0] = new Level0Proto();
    proto[1] = new Level1Proto();
    proto[2] = new Level2Proto();
    proto[3] = new Level3Proto();
    proto[4] = new Level4Proto();
    proto[5] = new Level5Proto();


    for (int i = 0; i < 6; ++i) {
        cout << "\n\n"<< i << "\n\n";
        Poster* test_poster = proto[i]->clone();
        test_poster->drawPoster();
        delete test_poster;
    }














    return 0;

}
