//
// Created by spite on 5/18/18.
//

#include <sstream>
#include <iostream>
#include "Board.h"
#include <ncurses.h>

Board::Board() {
    _board.reserve(20);
    for(auto& x : _board) {
        x.reserve(13);
    }

    generateBoard();
}

Board::Board(unsigned int x, unsigned int y) {
    _board.reserve(y);

    for(auto& i : _board)
    {
        i.reserve(x);
    }
    /*for(int i = 0; i <_board.size(); ++i)
    {
        _board[i].reserve(x);
    }*/
    generateBoard();
}

void Board::display() {

    for(auto it = _board.begin(); it != _board.end(); it++)
    {
        auto temp = *it;
        printw("%s \n", temp.c_str());
    }

}

bool Board::replace(Position position, char character) {
    if(position.getY() >=_board.size() || position.getX() >= _board[0].size() || position.getY() < 0
       || position.getX() < 0) {
        return false;
    }
    _board[position.getY()][position.getX()] = character;

}

void Board::generateBoard() {

    _board = {"********#****",
              "*##*###*#*###",
              "*##*###*#*###",
              "*************",
              "*##*#*#####*#",
              "****#***#***#",
              "###*###*#*###",
              "  #*#*******#",
              "###*#*##_##*#",
              "******#   #**",
              "###*#*#####*#",
              "  #*#*******#",
              "###*#*#####*#",
              "********#****",
              "*##*###*#*###",
              "**#**********",
              "#*#*#*#####**",
              "****#***#****",
              "*######*#*###",
              "*************"};

}

Characters Board::getCharacter(Position position) {
    return static_cast<Characters>(_board[position.getY()][position.getX()]);
}
