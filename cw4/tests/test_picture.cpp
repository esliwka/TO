//
// Created by elim on 08/12/22.
//

#include <vector>
#include "../Picture.h"

int main() {
    auto *l1 = new Picture();
    if (l1->getX() != 0 || l1->getY() != 0 || not l1->getChildren().empty() ) {
        std::cerr<<"Default Line constructor fail\n";
        return 1;
    }
    std::cout<<"Default Line constructor passed\n";
    return 0;
}