//
// Created by jo on 2020/09/01.
//

#include "BaseImage.h"

void BaseImage::drawPoster() {
//header
    cout << termcolor::reset << termcolor::crossed;
    for (int i = 0; i < getWidth(); ++i) {
        cout << borderPixel;
    }
    cout << endl;
//inner
    for (Poster *bit : imageHeight) {
        bit->drawPoster();
    }
//footer
    cout << termcolor::reset << termcolor::crossed;
    for (int i = 0; i < getWidth(); ++i) {
        cout << borderPixel;
    }
    cout << endl;

}

void BaseImage::addImage(Poster *image) {
    imageHeight.push_back(image);
}
