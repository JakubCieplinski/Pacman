//
// Created by spite on 5/18/18.
//

#ifndef PACMAN_GAME_H
#define PACMAN_GAME_H


#include <memory>
#include "Board.h"
#include "Player.h"
#include <thread>

class Game {
private:
    std::unique_ptr<Board> _gameBoard;
    std::unique_ptr<Player> _player;
    int _points;
    int key = KeyCode::BLANK;
public:
    Game(unsigned int x, unsigned int y);
    ~Game();
    void run();
    void readKey();

};


#endif //PACMAN_GAME_H
