//
// Created by jo on 2020/09/01.
//

#ifndef A_BASEIMAGE_H
#define A_BASEIMAGE_H
#include "Poster.h"
#include "ImageElement.h"
#include <vector>

class BaseImage : public Poster {
public:
    BaseImage(int height, int width) : Poster(height, width) {};
    void drawPoster() override {
        cout << termcolor::red << termcolor::italic;
        //header
        for (int i = 0; i < getWidth(); ++i) {
            cout << borderPixel;
        }
        cout << endl;
        //inner
        for(Poster* bit : imageHeight) {
            bit->drawPoster();
        }
        //footer
        for (int i = 0; i < getWidth(); ++i) {
            cout << borderPixel;
        }
        cout << endl;

    }
    void addImage(ImageElement* image) {
        imageHeight.push_back(image);
    }


private:
    vector<Poster*> imageHeight;

};


#endif //A_BASEIMAGE_H
