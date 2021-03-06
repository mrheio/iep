#include <iostream>
#include <string>
#include <vector>

#include "./Game.hpp"

#ifndef GAMINGSERVICE_H
#define GAMINGSERVICE_H

class GamingService {
   private:
    GamingService();
    GamingService(const GamingService &);
    void operator=(const GamingService &);

   public:
    static GamingService &getInstance();

    static std::vector<Game *> games;

    static void addGame(Game *game);
    static void removeGame(std::string gameName);
    static void removeGame();
    static void removeAll();
    static void printGames();
    static void playGame(std::string gameName);
    static void playGame();

    static void printMenu();
    static void createAndAddGame(std::string gameGenre);
};
#endif