//
// Created by elim on 08/12/22.
//

#ifndef DRAWING_LINE_H
#define DRAWING_LINE_H


#include "Graphic.h"

class Line : public Graphic {
    float x1, y1, x2, y2;
public:
    explicit Line(float x1 = 0, float y1 = 0, float x2 = 0, float y2 = 0 ) : x1(x1), y1(y1), x2(x2), y2(y2) {}
    void Draw() override {
        std::cout<<"Rysuje linię od punktu ("<<x1<<", "<<y1<<" do punktu ("<<x2<<", "<<y2<<")"<<std::endl;
    }

    float getX1() const {
        return x1;
    }

    float getY1() const {
        return y1;
    }

    float getX2() const {
        return x2;
    }

    float getY2() const {
        return y2;
    }

    bool operator==(const Line &rhs) const {
        return x1 == rhs.x1 &&
               y1 == rhs.y1 &&
               x2 == rhs.x2 &&
               y2 == rhs.y2;
    }

    bool operator!=(const Line &rhs) const {
        return !(rhs == *this);
    }
};


#endif //DRAWING_LINE_H
