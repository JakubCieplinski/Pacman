//
// Created by spite on 5/18/18.
//

#ifndef PACMAN_PLAYER_H
#define PACMAN_PLAYER_H


#include "Utilities.h"



class Player {
private:
    Position _playerPosition;
    Characters _playerCharacter = Characters::PACMAN;
public:
    void move(KeyCode code);
    Position getPosition();
    void setPosition(Position direction);
    Player(Position position) : _playerPosition(position){};
    Characters getPlayerCharacter();
};


#endif //PACMAN_PLAYER_H
