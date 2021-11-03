#include "../include/StrategyGame.hpp"

StrategyGame::StrategyGame(std::string name, int numberOfPlayers) : Game(name, "fps", numberOfPlayers){};

void StrategyGame::play() {
    std::cout << name << " => "
              << "Planning the next move" << std::endl;
}