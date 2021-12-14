#include "../include/GameCreator.hpp"

std::shared_ptr<FpsGame> GameCreator::createFpsGame(std::string name, int numberOfPlayers) {
    return std::shared_ptr<FpsGame>(new FpsGame(name, numberOfPlayers));
}

std::shared_ptr<AdventureGame> GameCreator::createAdventureGame(std::string name, int numberOfPlayers) {
    return std::shared_ptr<AdventureGame>(new AdventureGame(name, numberOfPlayers));
};

std::shared_ptr<StrategyGame> GameCreator::createStrategyGame(std::string name, int numberOfPlayers) {
    return std::shared_ptr<StrategyGame>(new StrategyGame(name, numberOfPlayers));
};