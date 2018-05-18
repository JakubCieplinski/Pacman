#include <iostream>
#include "Board.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    Board b;

    std::cout << b.display();
    std::cin.get();
    return 0;
}