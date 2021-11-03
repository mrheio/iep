#include "../include/FpsGame.hpp"

FpsGame::FpsGame(std::string name, int numberOfPlayers) : Game(name, "fps", numberOfPlayers){};

void FpsGame::play() {
    std::cout << name << " => "
              << "Shooting enemies" << std::endl;
}