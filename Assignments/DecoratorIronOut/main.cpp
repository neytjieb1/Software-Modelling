#include <vector>
#include "Decorator.h"
#include "Prototype.h"

using  namespace std;


int main() {
    Poster* test_poster;

    /*Poster* e1 = new WashHands();
    e1->addImage(new ImageElement(5));
    zero_poster = new BaseImage(5);
    zero_poster->addImage(e1);
    zero_poster->setColor(Orange);
    zero_poster->drawPoster();
    delete zero_poster;*/

    PosterPrototype* proto[6];
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








    return 0;

}
