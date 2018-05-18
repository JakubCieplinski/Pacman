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
    void operator+=(Position position){
        this->_x+=position.getX();
        this->_y+=position.getY();
    }
};

enum Characters
{
    GHOST = '&', PACMAN = '@', BALL = '*', WALL = '#', EMPTY = ' ', DOOR = '_'
};

enum KeyCode
{
    KEY_A = 0x41,
    KEY_W = 0x57,
    KEY_S = 0x53,
    KEY_D = 0x44,
    KEY_ESC = 0x1B,
    BLANK = 0x00
};
#endif //PACMAN_UTILITIES_H
