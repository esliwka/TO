//
// Created by elim on 08/12/22.
//

#ifndef DRAWING_LINE_H
#define DRAWING_LINE_H


#include "Graphic.h"

class Line : public Graphic {
    float x1 = 0, y1 = 0, x2 = 0, y2 = 0;
public:
    Line() = default;
    explicit Line(float x1, float y1, float x2, float y2 ) : x1(x1), y1(y1), x2(x2), y2(y2) {}

    void Draw() override {
        std::cout<<"Rysuje linię od punktu ("<<x1<<", "<<y1<<" do punktu ("<<x2<<", "<<y2<<")"<<std::endl;
    }
};


#endif //DRAWING_LINE_H
