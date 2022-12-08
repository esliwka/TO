#include <iostream>
#include "Picture.h"
#include "Line.h"
#include "Rectangle.h"

int main() {
    auto *p1 = new Picture();
    auto *l1 = new Line(1,1,3,3);
    auto *l2 = new Line(3,3,5,1);
    auto *l3 = new Line(3,3,3,8);
    auto *r1 = new Rectangle(1,8,5,12);
    auto *p2 = new Picture(1,12);
    auto *r2 = new Rectangle(1,1,3,3);


    p1->Add(l1);
    p1->Add(l2);
    p1->Add(l3);
    p1->Add(r1);
    p1->Add(p2);

    p2->Add(r2);

    p1->Draw();

    return 0;
}
