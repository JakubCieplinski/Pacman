//
// Created by spite on 5/18/18.
//

#ifndef CHARACTER_H
#define CHARACTER_H


#include "Utilities.h"



class Character {
protected:
    Position _playerPosition;
    Characters _playerCharacter;
public:
    virtual void setDirection(KeyCode code) = 0;
    Position getPosition();
    void moveInSpecifiedDirection(Position direction);
    Character() = default;
    Characters getPlayerCharacter();
    void setPosition(Position position);
};


#endif //CHARACTER_H
