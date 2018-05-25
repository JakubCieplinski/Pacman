//
// Created by spite on 5/18/18.
//

#include "Game.h"
#include "Pacman.h"
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <iostream>
#include <ncurses.h>
#include <thread>


Game::Game(unsigned int x, unsigned int y) : _points(0) {
    _gameBoard = std::make_unique<Board>(Board(x,y));
    std::srand(std::time(nullptr));
    unsigned int ix = std::rand() % x;
    unsigned int iy = std::rand() % y;
    _player = std::make_unique<Pacman>(Pacman(Position(0,0)));
    /*_player = std::make_unique<Character>(Character(Position(ix,iy)));

    while(isColliding()) {
        ix = std::rand() % x;
        iy = std::rand() % y;
        _player->moveInSpecifiedDirection(Position(ix, iy));
    }
*/
    _lost = false;
    initscr();
    nodelay(stdscr, true);
    keypad(stdscr, true);
    display();

}


void Game::run() {
    while(not _lost)
    {

        handleKeyPress();
        display();
        std::this_thread::sleep_for(std::chrono::milliseconds(600));




    }


}

void Game::handleKeyPress(){

    oldPlayerPosition = _player->getPosition();
    if((_key = getch()) == ERR) {
        _player->setDirection(static_cast<KeyCode>(_oldKey));
        if(isColliding()) {
            _player->setPosition(oldPlayerPosition);
            _moved = false;
        }
        else
        {
            _moved = true;
            return;
        }
    }
    else
    {
        if(KEY_ESC == _key)
        {
            _lost = true;
            return;
        }
        _player->setDirection(static_cast<KeyCode>(_key));
        if(isColliding())
        {
            _player->setPosition(oldPlayerPosition);
            _moved = false;
        }
        else {
            _oldKey = _key;
            _moved = true;
            return;
        }
    }


}

Game::~Game() {
    endwin();
    std::cout << "Game Finished with " << _points << " points\n";

}

void Game::display() {

    clear();
    _gameBoard->replace(_player->getPosition(), static_cast<char>(_player->getPlayerCharacter()));
    if(_moved) {
        _gameBoard->replace(oldPlayerPosition, static_cast<char>(Characters::EMPTY));
    }
    _gameBoard ->display();
    refresh();


}

bool Game::isColliding() {
    if(Characters::BALL == _gameBoard->getCharacter((_player->getPosition())))
    {
        _points+=1;
        return false;
    }
    else if(Characters::WALL == _gameBoard->getCharacter(_player->getPosition()))
    {
        return true;
    }
    else if(Characters::DOOR == _gameBoard->getCharacter(_player->getPosition()))
    {
        return true;
    }
    else if(Characters::GHOST == _gameBoard->getCharacter(_player->getPosition()))
    {
        _lost = true;
        return true;
    }

    return false;
}
