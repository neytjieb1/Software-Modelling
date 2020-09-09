//
// Created by jo on 2020/09/01.
//

#include "ImageElement.h"
#include <random>

void ImageElement::drawPoster() {
    int i = rand() % 4;
    cout << borderPixel << "**THIS MESSAGE IS BROUGHT TO YOU BY THE GOVERNMENT**" << borderPixel << endl;
    //cout << this->imageWidth << endl;
    /*switch (i) {
        case 0:
            cout << termcolor::red << termcolor::dark;
            break;
        case 1:
            cout << termcolor::blue << termcolor::bold;
            break;
        case 2:
            cout << termcolor::cyan;
            break;
        case 3:
            cout << termcolor::color<255,129,18> << termcolor::blink;
            break;
    }*/
    for (string line : imageWidth) {
        cout << line << endl;
    }
}

void ImageElement::addLine(string line) {
    imageWidth.push_back(line);
}
