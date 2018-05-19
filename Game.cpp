//
// Created by spite on 5/18/18.
//

#include "Game.h"
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <iostream>
#include <curses.h>


Game::Game(unsigned int x, unsigned int y) : _points(0) {
    _gameBoard = std::make_unique<Board>(Board(x,y));
    std::srand(std::time(nullptr));
    int ix = std::rand() % x;
    int iy = std::rand() % y;

    while(not _gameBoard->replace(Position(ix,iy), static_cast<char>(Characters::PACMAN)))
    {
        std::cout << "\nFinding Position\n";
        std::cout << "X: " << ix << std::endl;
        std::cout << "Y: " << iy << std::endl;
        ix = std::rand() % x;
        iy = std::rand() % y;
    }
    std::cout << ix << std::endl << iy << std::endl;
    _player = std::make_unique<Player>(Player(Position(ix,iy)));

}


void Game::run() {
    std::cout << "\nRunning\n";
    Position oldPlayerPosition{0,0};
    while(1)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));

        key = getch();
        if(KeyCode::KEY_ESC == key)
        {
            break;
        }
        oldPlayerPosition = _player->getPosition();
        _player->movePacman(static_cast<KeyCode>(key));
        if(not _gameBoard->replace(_player->getPosition(), _player->getPlayerCharacter()))
        {
            break;
        }
        _gameBoard->replace(oldPlayerPosition, Characters::EMPTY);
        _points+=1;
        std::cout << _gameBoard->display();

    }


}

void Game::readKey(){
    std::cout << "\nReadkey thread started\n";
    while(1){
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
        key = getch();
        std::cout << key << std::endl;
        if(KeyCode::KEY_ESC == getch())
        {
            break;
        }

    }

}

Game::~Game() {

}
