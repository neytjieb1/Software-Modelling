//
// Created by jo on 2020/09/01.
//

#include "ImageAddOns.h"

void ImageAddOns::drawPoster() {
    addOn->drawPoster();

}

ImageAddOns::ImageAddOns(Poster *imageElement) : Poster(imageElement->getHeight(), imageElement->getWidth()) {
    if (imageElement->getHeight()==0 && imageElement->getWidth()==0) {
        addOn = nullptr;
    }
    else {
        addOn = imageElement;
    }
}

ImageAddOns::~ImageAddOns() {
    //delete addOn;
}

string ImageAddOns::fillAndPad(string line, int end) {
    vector<char> newLine;
    for (int i = 0; i < 16; ++i) {
        newLine.push_back(borderPixel);
    }
    newLine.insert(newLine.end(), line.begin(), line.end());

    for (int i = 0; i < end; ++i) {
        newLine.push_back(borderPixel);
    }

    return string(newLine.begin(), newLine.end());
}

ImageAddOns::ImageAddOns() {
    this->addOn = nullptr;
}
