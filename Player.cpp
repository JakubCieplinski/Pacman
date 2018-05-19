//
// Created by spite on 5/18/18.
//

#include "Player.h"

void Player::movePacman(KeyCode code) {
    switch(code)
    {
        case KeyCode::KEY_A:
            setPosition(Position{-1,0});
            break;
        case KeyCode::KEY_D:
            setPosition(Position{1,0});
            break;
        case KeyCode::KEY_W:
            setPosition(Position{0,-1});
            break;
        case KeyCode::KEY_S:
            setPosition(Position{0,1});
            break;
    }
}

Position Player::getPosition() {
    return _playerPosition;
}

void Player::setPosition(Position direction) {
    _playerPosition += direction;
}

Characters Player::getPlayerCharacter() {
    return _playerCharacter;
}
