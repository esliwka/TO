//
// Created by elim on 08/12/22.
//

#ifndef DRAWING_GRAPHIC_H
#define DRAWING_GRAPHIC_H


#include <iostream>

class Graphic {
protected:
    Graphic *parent;
public:
    virtual void Draw() {};
    virtual void Add(Graphic *g) {};
    virtual void Remove(Graphic *g) {};
    void SetParent(Graphic *p) {
        this->parent = p;
    };
};


#endif //DRAWING_GRAPHIC_H
