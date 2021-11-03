#include <iostream>
#include <string>

#include "./Game.hpp"
#ifndef ADVENTUREGAME_H
#define ADVENTUREGAME_H

class AdventureGame : public Game {
   public:
    AdventureGame(std::string name, int numberOfPlayers);
    void play();
};
#endif