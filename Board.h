//
// Created by spite on 5/18/18.
//

#ifndef PACMAN_BOARD_H
#define PACMAN_BOARD_H


#include <vector>
#include <string>
#include "Utilities.h"


class Board {
private:
    std::vector<std::string> _board;
public:
    Board();
    Board(unsigned int x, unsigned int y);
    void display();
    bool replace(Position position, char character);
    void generateBoard();
    Characters getCharacter(Position position);
};


#endif //PACMAN_BOARD_H
