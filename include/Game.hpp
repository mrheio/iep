#include <iostream>
#include <memory>
#include <string>
#include <vector>

#ifndef GAME_H
#define GAME_H

class Game {
   private:
    Game();                         // stop default constructor from being used
    Game(const Game &);             // stop copy consructor from being used
    Game &operator=(const Game &);  // stop assignment operator from being used

   protected:
    std::string name;
    std::string genre;
    int numberOfPlayers;

   public:
    Game(std::string name, std::string genre, int numberOfPlayers);
    virtual ~Game();

    std::string getName();
    void setName(std::string name);

    std::string getGenre();
    void setGenre(std::string genre);

    int getNumberOfPlayers();
    void setNumberOfPlayers(int numberOfPlayers);

    std::string getGameType();

    friend std::ostream &operator<<(std::ostream &strm, const Game &game);

    virtual void play() = 0;
};
#endif