#include <iostream>
#include <memory>
#include <string>
#include <vector>

#include "AdventureGame.hpp"
#include "FpsGame.hpp"
#include "StrategyGame.hpp"

#ifndef GAMECREATOR_H
#define GAMECREATOR_H

class GameCreator {
   public:
    static std::shared_ptr<FpsGame> createFpsGame(std::string name, int numberOfPlayers);
    static std::shared_ptr<AdventureGame> createAdventureGame(std::string name, int numberOfPlayers);
    static std::shared_ptr<StrategyGame> createStrategyGame(std::string name, int numberOfPlayers);
};

#endif