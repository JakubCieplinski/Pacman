//
// Created by spite on 5/21/18.
//

#include "Pacman.h"

void Pacman::setDirection(KeyCode code) {
    switch(code)
    {
        case KeyCode::KEY_A:
            moveInSpecifiedDirection(Position{-1, 0});
            break;
        case KeyCode::KEY_D:
            moveInSpecifiedDirection(Position{1, 0});
            break;
        case KeyCode::KEY_W:
            moveInSpecifiedDirection(Position{0, -1});
            break;
        case KeyCode::KEY_S:
            moveInSpecifiedDirection(Position{0, 1});
            break;
    }

}

Pacman::Pacman(Position position) {
    _playerCharacter = Characters::PACMAN;
    _playerPosition = position;

}
