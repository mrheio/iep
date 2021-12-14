#include <iostream>
#include <memory>
#include <string>
#include <vector>

#include "Game.hpp"

#ifndef STORE_H
#define STORE_H

class Store {
   private:
    std::string name;
    std::vector<std::shared_ptr<Game>> games;
    Store(std::string name, std::vector<std::shared_ptr<Game>> games);

   public:
    static std::unique_ptr<Store> createStore(std::string name, std::vector<std::shared_ptr<Game>> games);

    std::vector<std::shared_ptr<Game>> getGames();

    void addGame(std::shared_ptr<Game> game);

    void removeGame(std::string gameName);

    void printGames();
};
#endif