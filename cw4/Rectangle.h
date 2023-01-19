//
// Created by elim on 08/12/22.
//

#ifndef DRAWING_RECTANGLE_H
#define DRAWING_RECTANGLE_H


#include "Graphic.h"
#include "Line.h"

class Rectangle : public Graphic {
    float x1 = 0, y1 = 0, x2 = 0, y2 = 0;
public:
    Rectangle() = default;
    explicit Rectangle(float x1, float y1, float x2, float y2) : x1(x1), y1(y1), x2(x2), y2(y2) {}
    void Draw() override {
        std::cout<<"+Rysuje prostokąt:"<<std::endl;
        Line *l1 = new Line(x1, y1, x2, y1);
        l1->Draw();
        Line *l2 = new Line(x2, y1, x2, y2);
        l2->Draw();
        Line *l3 = new Line(x2, y2, x1, y2);
        l3->Draw();
        Line *l4 = new Line(x1, y2, x1, y1);
        l4->Draw();
        std::cout<<"+--------------------------------------+"<<std::endl;
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
};


#endif //DRAWING_RECTANGLE_H
