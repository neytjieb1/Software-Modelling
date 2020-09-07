//
// Created by jo on 2020/09/01.
//

#include "ImageAddOns.h"

void ImageAddOns::drawPoster() {
    addOn->drawPoster();
}

ImageAddOns::ImageAddOns(Poster *imageElement) {
    addOn = imageElement;
}

ImageAddOns::~ImageAddOns() {

}
