//
// Created by jo on 2020/09/10.
//

#ifndef A2_POSTERPROTOTYPE_H
#define A2_POSTERPROTOTYPE_H
#include "BaseImage.h"

#include "WashHands.h"
#include "Mask.h"
#include "TemperatureCheck.h"
#include "UseHandSanitiser.h"

class PosterPrototype {
public:
    PosterPrototype() {};
    ~PosterPrototype() {};
    virtual Poster* clone() = 0;
};

class Level0Proto : public PosterPrototype {
public:
    Level0Proto(){
        Poster* e1 = new WashHands();
        e1->addImage(new ImageElement(5, White));
        zero_poster = new BaseImage(5);
        zero_poster->addImage(e1);
        zero_poster->drawPoster(); //to initialise all lines finally
    };
    Poster* clone() override {
        return zero_poster->clone();
    }
    ~Level0Proto(){delete zero_poster;};
private:
    Poster* zero_poster;
};

class Level1Proto : public PosterPrototype {
public:
    Level1Proto(){
        Poster* e1 = new WashHands();
        e1->addImage(new UseHandSanitiser());
        e1->addImage(new ImageElement(5, Green));
        one_poster = new BaseImage(5);
        one_poster->addImage(e1);
        //one_poster->setColor(Green);
        one_poster->drawPoster(); //to initialise all lines finally
    };
    Poster* clone() override {
        return one_poster->clone();
    }
    ~Level1Proto(){delete one_poster;};
private:
    Poster* one_poster;
};

class Level2Proto : public PosterPrototype {
public:
    Level2Proto(){
        Poster* e1 = new WashHands();
        e1->addImage(new ImageElement(5, Blue));
        Poster* e2 = new Mask();
        e2->addImage(new ImageElement(5, Green));

        two_poster = new BaseImage(5);
        two_poster->addImage(e1);
        two_poster->addImage(e2);
        two_poster->drawPoster(); //to initialise all lines finally
    };
    Poster* clone() override {
        return two_poster->clone();
    }
    ~Level2Proto(){delete two_poster;};
private:
    Poster* two_poster;
};


class Level3Proto : public PosterPrototype {
public:
    Level3Proto(){
        Poster* e1 = new WashHands();
        e1->addImage(new UseHandSanitiser());
        e1->addImage(new ImageElement(5, Yellow));

        Poster* e2 = new Mask();
        e2->addImage(new ImageElement(5, Blue));

        three_poster = new BaseImage(5);
        three_poster->addImage(e1);
        three_poster->addImage(e2);
        three_poster->drawPoster(); //to initialise all lines finally
    };
    Poster* clone() override {
        return three_poster->clone();
    }
    ~Level3Proto(){delete three_poster;};
private:
    Poster* three_poster;
};

class Level4Proto : public PosterPrototype {
public:
    Level4Proto(){
        Poster* e1 = new WashHands();
        e1->addImage(new UseHandSanitiser());
        e1->addImage(new ImageElement(5, Orange));

        Poster* e2 = new Mask();
        e2->addImage(new ImageElement(5, Yellow));

        Poster* e3 = new TemperatureCheck();
        e3->addImage(new ImageElement(5,Orange));

        four_poster = new BaseImage(5);
        four_poster->addImage(e1);
        four_poster->addImage(e2);
        four_poster->addImage(e3);
        four_poster->drawPoster(); //to initialise all lines finally
    };
    Poster* clone() override {
        return four_poster->clone();
    }
    ~Level4Proto(){delete four_poster;};
private:
    Poster* four_poster;
};

class Level5Proto : public PosterPrototype {
public:
    Level5Proto(){
        Poster* e1 = new WashHands();
        e1->addImage(new UseHandSanitiser());
        e1->addImage(new ImageElement(5, Red));

        Poster* e2 = new Mask();
        e2->addImage(new ImageElement(5, Orange));

        Poster* e3 = new TemperatureCheck();
        e3->addImage(new WashHands());
        e3->addImage(new ImageElement(5,Red));


        five_poster = new BaseImage(5);
        five_poster->addImage(e1);
        five_poster->addImage(e2);
        five_poster->addImage(e3);
        five_poster->drawPoster(); //to initialise all lines finally
    };
    Poster* clone() override {
        return five_poster->clone();
    }
    ~Level5Proto(){delete five_poster;};
private:
    Poster* five_poster;
};

#endif //A2_POSTERPROTOTYPE_H
