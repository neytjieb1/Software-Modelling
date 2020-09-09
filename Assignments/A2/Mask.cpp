//
// Created by jo on 2020/09/01.
//

#include "Mask.h"


/*void Mask::drawPoster() {
    cout << borderPixel << "MASK" << borderPixel << endl;

    cout << line << borderPixel << endl;
        char *sentence = new char[line.size() + 1];
        strcpy(sentence, line.c_str());
        cout << ImageAddOns::fillAndPad(line, addOn->getWidth() - 27) << endl;
        char temp[line.size()+1];
        strcpy(temp, line.c_str());
        static_cast<ImageElement*>(addOn)->addLine(line);
    }
    inFile.close();

    cout << termcolor::reset << termcolor::yellow << termcolor::bold;
    ImageAddOns::drawPoster();

}*/

Mask::Mask() {
    readFile("/home/jo/CLionProjects/Software-Modelling/Assignments/A2/maskAlert.txt");
}

Mask::~Mask() {}

void Mask::drawPoster() {
    cout << termcolor::reset << termcolor::red ;
    for (string l: lines) {
        addLine(l);
    }
    ImageAddOns::drawPoster();
}
