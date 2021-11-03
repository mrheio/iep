#include "../include/Game.hpp"

#include <algorithm>

Game::Game(std::string name, std::string genre, int numberOfPlayers) {
    this->name = name;
    this->genre = genre;
    this->numberOfPlayers = numberOfPlayers;
}

Game::~Game() {}

std::string Game::getName() {
    return name;
}
void Game::setName(std::string name) {
    this->name = name;
}

std::string Game::getGenre() {
    return genre;
}
void Game::setGenre(std::string genre) {
    this->genre = genre;
}

int Game::getNumberOfPlayers() {
    return numberOfPlayers;
}
void Game::setNumberOfPlayers(int numberOfPlayers) {
    this->numberOfPlayers = numberOfPlayers;
}

std::string Game::getGameType() {
    return numberOfPlayers > 1 ? "multiplayer" : "singleplayer";
}

std::ostream& operator<<(std::ostream& strm, const Game& game) {
    return strm << "GAME - "
                << "name: " << game.name << ", genre: " << game.genre << ", players: " << game.numberOfPlayers << std::endl;
}