#include "../include/GameCreator.hpp"
#include "../include/Store.hpp"

int main() {
    std::shared_ptr<Game> fpsGame1 = GameCreator::createFpsGame("Doom", 1);
    std::shared_ptr<Game> fpsGame2 = GameCreator::createFpsGame("Call of Duty", 1);
    std::shared_ptr<Game> fpsGame3 = GameCreator::createFpsGame("Battlefield", 128);

    std::shared_ptr<Game> adventureGame1 = GameCreator::createAdventureGame("Uncharted", 1);
    std::shared_ptr<Game> adventureGame2 = GameCreator::createAdventureGame("Witcher", 1);

    std::shared_ptr<Game> strategyGame1 = GameCreator::createStrategyGame("Starcraft", 4);
    std::shared_ptr<Game> strategyGame2 = GameCreator::createStrategyGame("Warcraft", 4);
    std::shared_ptr<Game> strategyGame3 = GameCreator::createStrategyGame("Company of Heroes", 1);
    std::shared_ptr<Game> strategyGame4 = GameCreator::createStrategyGame("Command and Conquer", 1);

    // a game can be owned (shared) by multiple stores
    // each store is unique
    std::unique_ptr<Store> store1 = Store::createStore("GamingIndustry", {fpsGame1, fpsGame2, strategyGame1});
    std::unique_ptr<Store> store2 = Store::createStore("Gamer4Life", {fpsGame2, adventureGame1, adventureGame2, strategyGame1});
    std::unique_ptr<Store> store3 = Store::createStore("BestGameStore", {fpsGame3, fpsGame2, adventureGame1, strategyGame3, strategyGame4, strategyGame1});

    store1->printGames();
    store1->removeGame("Doom");
    store1->printGames();
    store1->addGame(fpsGame1);
    store1->printGames();
    return 0;
}
