//
// Created by spite on 5/18/18.
//

#include <sstream>
#include <iostream>
#include "Board.h"

Board::Board() {
    _board.reserve(20);
    for(auto& x : _board) {
        x.reserve(13);
    }

    generateBoard();
}

Board::Board(unsigned int x, unsigned int y) {
    _board.resize(y);
    for(int i = 0; i <_board.size(); ++i)
    {
        _board[i].resize(x);
    }
    generateBoard();
}

std::string Board::display() {
    std::ostringstream s;

    for(int i = 0; i<_board.size(); ++i)
    {
        for(auto& x: _board[i]) {
            s << x;
            s << '\t';
        }
        s << '\n';
    }

    return s.str();
}

bool Board::replace(Position position, char character) {
    if(position.getY() >=_board.size() || position.getX() >= _board[0].size()) {
//        std::cout << _board[position.getX()][position.getY()] << std::endl;
        return false;
    }
    if(Characters::WALL != _board[position.getY()][position.getX()]) {
//        std::cout << _board[position.getX()][position.getY()] << std::endl;
        _board[position.getY()][position.getX()] = character;
        return true;
    }
}

void Board::generateBoard() {

    _board = {{'*','*','*','*','*','*','*','*','#','*','*','*','*'},
              {'*','#','#','*','#','#','#','*','#','*','#','#','#'},
              {'*','#','#','*','#','#','#','*','#','*','#','#','#'},
              {'*','*','*','*','*','*','*','*','*','*','*','*','*'},
              {'*','#','#','*','#','*','#','#','#','#','#','*','#'},
              {'*','*','*','*','#','*','*','*','#','*','*','*','#'},
              {'#','#','#','*','#','#','#','*','#','*','#','#','#'},
              {' ',' ','#','*','#','*','*','*','*','*','*','*','#'},
              {'#','#','#','*','#','*','#','#','_','#','#','*','#'},
              {'*','*','*','*','*','*','#',' ',' ',' ','#','*','*'},
              {'#','#','#','*','#','*','#','#','#','#','#','*','#'},
              {' ',' ','#','*','#','*','*','*','*','*','*','*','#'},
              {'#','#','#','*','#','*','#','#','#','#','#','*','#'},
              {'*','*','*','*','*','*','*','*','#','*','*','*','*'},
              {'*','#','#','*','#','#','#','*','#','*','#','#','#'},
              {'*','*','#','*','*','*','*','*','*','*','*','*','*'},
              {'#','*','#','*','#','*','#','#','#','#','#','*','*'},
              {'*','*','*','*','#','*','*','*','#','*','*','*','*'},
              {'*','#','#','#','#','#','#','*','#','*','#','#','#'},
              {'*','*','*','*','*','*','*','*','*','*','*','*','*'}};

}
