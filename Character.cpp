//
// Created by spite on 5/18/18.
//

#include "Character.h"
/*
void Character::setDirection(KeyCode code) {

}*/

Position Character::getPosition() {
    return _playerPosition;
}

void Character::moveInSpecifiedDirection(Position direction) {
    _playerPosition += direction;
}

Characters Character::getPlayerCharacter() {
    return _playerCharacter;
}

void Character::setPosition(Position position) {

    _playerPosition = position;

}
