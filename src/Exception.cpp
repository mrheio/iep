#include "../include/Exception.hpp"

Exception::Exception() : fpsGame(new FpsGame("Generic fps game", 1)), message(""){};

Exception::Exception(const Exception& rhs) : fpsGame(rhs.fpsGame), message(rhs.message){};

Exception::Exception(FpsGame* fpsGame, std::string message) : fpsGame(fpsGame), message(message){};

Exception& Exception::operator=(const Exception& rhs) {
    if (this == &rhs) {
        std::cout << "Self-assignment" << std::endl;
    }

    FpsGame* oldFpsGame = rhs.fpsGame;
    fpsGame = new FpsGame(rhs.fpsGame->getName(), rhs.fpsGame->getNumberOfPlayers());
    delete oldFpsGame;

    message = rhs.message;

    return *this;
}

FpsGame* Exception::getFpsGame() {
    return fpsGame;
}

std::string Exception::getMessage() {
    return message;
}

void Exception::setMessage(std::string message) {
    this->message = message;
}

void Exception::printMessage() {
    std::cout << *fpsGame << "MESSAGE: [" << message << "]" << std::endl;
}