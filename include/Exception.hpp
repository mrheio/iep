#include <iostream>

#include "FpsGame.hpp"
#ifndef EXCEPTION_H
#define EXCEPTION_H

class Exception {
   private:
    FpsGame* fpsGame;
    std::string message;

   public:
    Exception();
    Exception(const Exception& rhs);
    Exception(FpsGame* fpsGame, std::string message);
    Exception& operator=(const Exception& rhs);
    FpsGame* getFpsGame();
    std::string getMessage();
    void setMessage(std::string message);
    void printMessage();
};
#endif