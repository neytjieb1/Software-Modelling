//
// Created by jo on 2020/09/01.
//

#ifndef A_BASEIMAGE_H
#define A_BASEIMAGE_H
#include "Poster.h"


class BaseImage : public Poster {
public:
    BaseImage();
    void addLine(string line) override;
    void drawPoster() override;
    void addImage(Poster *i) override;


private:
    vector<Poster*> imageHeight;

};


#endif //A_BASEIMAGE_H
