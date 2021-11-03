#include "../include/AdventureGame.hpp"

AdventureGame::AdventureGame(std::string name, int numberOfPlayers) : Game(name, "fps", numberOfPlayers){};

void AdventureGame::play() {
    std::cout << name << " => "
              << "Adventure time" << std::endl;
}