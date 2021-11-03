#include <iostream>
#include <string>

#include "./Game.hpp"
#ifndef FPSGAME_H
#define FPSGAME_H

class FpsGame : public Game {
   public:
    FpsGame(std::string name, int numberOfPlayers);
    void play();
};
#endif