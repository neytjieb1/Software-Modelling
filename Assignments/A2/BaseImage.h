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
    void drawPoster() override;
    void addImage(Poster* image);


private:
    vector<Poster*> imageHeight;

};


#endif //A_BASEIMAGE_H
