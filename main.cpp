#include <iostream>
#include "Board.h"
#include "Game.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    Game game(13,20);
    game.init();
    return 0;
}