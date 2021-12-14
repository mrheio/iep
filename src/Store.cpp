#include "../include/Store.hpp"

#include <algorithm>

Store::Store(std::string name, std::vector<std::shared_ptr<Game>> games) : name(name), games(games) {
    std::cout << "Store [" << name << "] created with [" << games.size() << "] games" << std::endl;
}

std::unique_ptr<Store> Store::createStore(std::string name, std::vector<std::shared_ptr<Game>> games) {
    return std::unique_ptr<Store>(new Store(name, games));
}

std::vector<std::shared_ptr<Game>> Store::getGames() {
    return games;
}

void Store::addGame(std::shared_ptr<Game> game) {
    games.push_back(game);
    std::cout << "Added game [" << game->getName() << "] to store [" << name << "]" << std::endl;
}

void Store::removeGame(std::string gameName) {
    for (auto iter = games.begin(); iter != games.end(); ++iter) {
        if ((*iter)->getName() == gameName) {
            games.erase(iter);
            std::cout << "Game [" << gameName << "] removed from store [" << name << "]" << std::endl;
        }
    }
}

void Store::printGames() {
    std::cout << "Games in store [" << name << "]:" << std::endl;
    for (auto game : games) {
        std::cout << *game;
    }
    std::cout << "----------------------------------------------------------------------------------" << std::endl;
}