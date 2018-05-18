cmake_minimum_required(VERSION 3.10)
project(Pacman)

set(CMAKE_CXX_FLAGS "--std=c++17 -g -O0 -lpthread -lncurses")

add_executable(Pacman main.cpp Board.cpp Board.h Player.cpp Player.h Utilities.h Game.cpp Game.h )