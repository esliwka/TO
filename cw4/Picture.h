//
// Created by elim on 08/12/22.
//

#ifndef DRAWING_PICTURE_H
#define DRAWING_PICTURE_H


#include <algorithm>
#include <list>
#include "Graphic.h"

class Picture : public Graphic {
    float x = 0,y = 0;
    std::list<Graphic *> children;
public:
    Picture() = default;;
    Picture(float x, float y) : x(x), y(y){}

    void Draw() override {
        std::cout<<">Rysuję obrazek od punktu: "<<x<<", "<<y<<std::endl;
        for(Graphic *g : children)
            g->Draw();
        std::cout<<">--------------------------------------<"<<std::endl;
    }
    void Add(Graphic *g) override {
        this->children.push_back(g);
    }
    void Remove(Graphic *g) override {
        this->children.remove(g);
        g->SetParent(nullptr);
    }
};


#endif //DRAWING_PICTURE_H
