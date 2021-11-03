#include <iostream>
#include <string>

#include "./Game.hpp"
#ifndef STRATEGYGAME_H
#define STRATEGYGAME_H

class StrategyGame : public Game {
   public:
    StrategyGame(std::string name, int numberOfPlayers);
    void play();
};
#endif