//
// Created by spite on 5/18/18.
//

#include "Player.h"

Position Player::direction(KeyCode code) {
    switch(code)
    {
        case KeyCode::KEY_A:
            return Position{-1,0};
        case KeyCode::KEY_D:
            return Position{1,0};
        case KeyCode::KEY_W:
            return Position{0,-1};
        case KeyCode::KEY_S:
            return Position{0,1};
    }
}

Position Player::getPosition() {
    return _playerPosition;
}
