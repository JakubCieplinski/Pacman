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
    std::vector<std::vector<char>> _board;
public:
    Board();
    Board(unsigned int size);
    std::string display();
    void replace(Position position, Characters character);
    void generateBoard();
};


#endif //PACMAN_BOARD_H
