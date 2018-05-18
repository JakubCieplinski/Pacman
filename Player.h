//
// Created by spite on 5/18/18.
//

#ifndef PACMAN_PLAYER_H
#define PACMAN_PLAYER_H


#include "Utilities.h"

enum KeyCode
{
    KEY_A = '0x41',
    KEY_W = '0x57',
    KEY_S = '0x53',
    KEY_D = '0x44'
};

class Player {
private:
    Position _playerPosition;
    Characters _playerCharacter = Characters::PACMAN;
public:
    Position direction(KeyCode code);
    Position getPosition();
    Player(Position position) : _playerPosition(position){};
};


#endif //PACMAN_PLAYER_H
