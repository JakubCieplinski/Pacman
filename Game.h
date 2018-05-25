//
// Created by spite on 5/18/18.
//

#ifndef PACMAN_GAME_H
#define PACMAN_GAME_H


#include <memory>
#include "Board.h"
#include "Character.h"

class Game {
private:
    std::unique_ptr<Board> _gameBoard;
    std::unique_ptr<Character> _player;
    Position oldPlayerPosition{0,0};
    int _points;
    int _key = KeyCode::BLANK;
    int _oldKey = _key;
    bool _lost;
    bool _moved = false;
public:
    Game(unsigned int x, unsigned int y);
    ~Game();
    void run();
    void handleKeyPress();
    void display();
    bool isColliding();

};


#endif //PACMAN_GAME_H
