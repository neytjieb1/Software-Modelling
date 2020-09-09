//
// Created by jo on 2020/09/01.
//

#ifndef A_IMAGEELEMENT_H
#define A_IMAGEELEMENT_H
#include "Poster.h"
#include <cstring>

class ImageElement: public Poster {
public:
    ImageElement() : Poster() {
    };
    ImageElement(int height, int width) : Poster(height, width) {
        //imageWidth.reserve(20);
        //this->imageWidth = new char[width];
        //strcpy(imageWidth, "*THIS MESSAGE IS BROUGHT TO YOU BY THE GOVERNMENT*");
    };
    void drawPoster() override ;
    void addLine(string line);

private:
    vector<string> imageWidth;
};


#endif //A_IMAGEELEMENT_H
