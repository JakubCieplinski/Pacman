cmake_minimum_required(VERSION 3.10)
project(Pacman)

set(CMAKE_CXX_STANDARD 17)

add_executable(Pacman main.cpp Board.cpp Board.h Player.cpp Player.h Utilities.h)