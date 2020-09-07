#include <iostream>
#include "Pandemic.h"
#include "BaseImage.h"
#include <vector>
#include "termcolor.h"
#include "Mask.h"

void drawPoster(Poster* poster);

int main() {

    ////*** ***SECTION A*** ***////

   /* Pandemic* coronavirus = new Pandemic("Covid-19", 1);
    cout << coronavirus->getName() << " at " << coronavirus->getLevel() << endl << endl;

    for (int i = 0; i < 5; ++i) {
        coronavirus->increaseLevel();
        coronavirus->takeAction();
        cout << endl;
    }
    cout << coronavirus->getName() << " at " << coronavirus->getLevel() << endl << endl;
    for (int i = 0; i < 6; ++i) {
        coronavirus->decreaseLevel();
        coronavirus->takeAction();
        cout << endl;
    }
    cout << endl << coronavirus->getName() << " at " << coronavirus->getLevel() << endl << endl;

    for (int i = 0; i < 6; ++i) {
        coronavirus->increaseLevel();
        coronavirus->takeAction();
        cout << endl;
    }*/


    ////*** ***SECTION B*** ***////
    BaseImage* poster = new BaseImage(15, 30);
    poster->addImage(new Mask( new ImageElement());
    poster->drawPoster();



/*    cout << "\033[1;31mbold red text\033[0m\n";
    cout << "\033[7;32minverse green text\033[0m\n";
    cout << "\033[4;34munderlined blue text\033[0m\n";*/


    cout << termcolor::blue << termcolor::italic << "Hello\n";

    return 0;

}

void printLine(vector<char> line) {
    for (vector<char>::iterator it=line.begin(); it!=line.end(); ++it)
        cout << *it;
    cout << endl ;
}

void drawPoster(Poster* poster) {
    vector<char> line (poster->getWidth());
    fill(line.begin(), line.end(), '*');
    printLine(line);


    for (int row = 0; row < poster->getHeight(); ++row) {
        fill(line.begin(), line.begin()+1,'*');
        fill(line.begin()+1, line.end()-1, ' ');
        fill(line.end()-1, line.end(), '*');
        printLine(line);
    }
    fill(line.begin(), line.end(), '*');
    printLine(line);

}