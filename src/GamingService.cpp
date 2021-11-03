#include "../include/GamingService.hpp"

#include <algorithm>

#include "../include/AdventureGame.hpp"
#include "../include/FpsGame.hpp"
#include "../include/StrategyGame.hpp"

std::vector<Game*> GamingService::games;

GamingService::GamingService() {}

GamingService& GamingService::getInstance() {
    static GamingService instance;
    return instance;
}

void GamingService::addGame(Game* game) {
    games.push_back(game);
}

void GamingService::removeGame(std::string gameName) {
    auto isSameName = [gameName](Game* game) {
        return game->getName() == gameName;
    };
    auto it = std::find_if(games.begin(), games.end(), isSameName);
    delete *it;
    games.erase(it);
}

void GamingService::removeGame() {
    std::string gameName;
    std::cout << "Nume: " << std::endl;
    std::cin >> gameName;
    removeGame(gameName);
}

void GamingService::removeAll() {
    for (Game* game : games) {
        delete game;
    }
    games.clear();
}

void GamingService::printGames() {
    for (Game* game : games) {
        std::cout << *game;
    }
}

void GamingService::playGame(std::string gameName) {
    auto isSameName = [gameName](Game* game) {
        return game->getName() == gameName;
    };
    auto it = std::find_if(games.begin(), games.end(), isSameName);
    if (it != games.end()) {
        auto index = std::distance(games.begin(), it);
        games[index]->play();
    }
}

void GamingService::playGame() {
    std::string gameName;
    std::cout << "Nume: " << std::endl;
    std::cin >> gameName;
    playGame(gameName);
}

void GamingService::printMenu() {
    std::cout << "Alege: " << std::endl;
    std::cout << "1. Adauga un joc fps" << std::endl;
    std::cout << "2. Adauga un joc adventure" << std::endl;
    std::cout << "3. Adauga un joc de strategie" << std::endl;
    std::cout << "4. Afiseaza jocurile" << std::endl;
    std::cout << "5. Sterge un joc" << std::endl;
    std::cout << "6. Sterge toate jocurile" << std::endl;
    std::cout << "7. Joaca" << std::endl;
    std::cout << "restul. Termina executia" << std::endl;
}

void GamingService::createAndAddGame(std::string gameGenre) {
    std::string gameName;
    int numberOfPlayers;
    Game* game;
    std::cout << "Nume: " << std::endl;
    std::cin >> gameName;
    std::cout << "Jucatori: " << std::endl;
    std::cin >> numberOfPlayers;
    if (gameGenre == "fps") {
        game = new FpsGame(gameName, numberOfPlayers);
    }
    if (gameGenre == "adventure") {
        game = new AdventureGame(gameName, numberOfPlayers);
    }
    if (gameGenre == "strategy") {
        game = new StrategyGame(gameName, numberOfPlayers);
    }
    addGame(game);
}
