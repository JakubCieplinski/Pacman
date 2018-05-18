//
// Created by spite on 5/18/18.
//

#ifndef PACMAN_UTILITIES_H
#define PACMAN_UTILITIES_H

struct Position
{
private:
    int _x,_y;
public:
    Position(int x, int y) : _x(x), _y(y){};
    Position() = default;
    Position getPosition(){return Position(_x,_y);}
    int getX(){return _x;}
    int getY(){return _y;}
    void setX(int x){_x = x;}
    void setY(int y){_y = y;}
};

enum Characters
{
    GHOST = '&', PACMAN = '@', BALL = '*', WALL = '#', EMPTY = ' ', DOOR = '_'
};

#endif //PACMAN_UTILITIES_H