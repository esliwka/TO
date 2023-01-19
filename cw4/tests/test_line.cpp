//
// Created by elim on 08/12/22.
//

#include <vector>
#include "../Line.h"

int main() {
    auto *l1 = new Line();
    if (l1->getX1() != 0 || l1->getX2() != 0 || l1->getY1() != 0 || l1->getY2() != 0) {
        std::cerr<<"Default Line constructor fail\n";
        return 1;
    }
    std::cout<<"Default Line constructor passed\n";

    auto *l2 = new Line(1, 2, 3, 4);
    if (l2->getX1() != 1 || l1->getX2() != 2 || l1->getY1() != 3 || l1->getY2() != 4) {
        std::cerr<<"Line constructor with parameters fail\n";
        return 1;
    }
    std::cout<<"Line constructor with parameters passed\n";

    return 0;
}