//
// Created by spite on 5/21/18.
//

#ifndef PACMAN_PACMAN_H
#define PACMAN_PACMAN_H


#include "Character.h"

class Pacman : public Character {
public:
    Pacman(Position position);
    void setDirection(KeyCode code) override;

};


#endif //PACMAN_PACMAN_H
