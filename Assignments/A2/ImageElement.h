//
// Created by jo on 2020/09/01.
//

#ifndef A_IMAGEELEMENT_H
#define A_IMAGEELEMENT_H
#include "Poster.h"

class ImageElement: public Poster {
public:
    ImageElement() : Poster() {};
    ImageElement(int width) : Poster(0, width) {
        this->imageWidth = new char[width];
    };
    void drawPoster() override {

        cout << borderPixel <<  "**Drawing an image Element**" << borderPixel << endl;

    }

private:
    char* imageWidth;
};


#endif //A_IMAGEELEMENT_H
