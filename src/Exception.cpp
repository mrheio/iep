#include "../include/Exception.hpp"

Exception::Exception() : fpsGame(new FpsGame("Generic fps game", 1)), message(""){};

Exception::Exception(const Exception& rhs) : fpsGame(rhs.fpsGame), message(rhs.message){};

Exception::Exception(FpsGame* fpsGame, std::string message) : fpsGame(fpsGame), message(message){};

Exception& Exception::operator=(const Exception& rhs) {
    if (this == &rhs) {
        std::cout << "Self-assignment" << std::endl;  // print if this and rhs point to the same address => same object
    }

    FpsGame* oldFpsGame = fpsGame;                                                         // copy this fpsGame pointer to another pointer
    fpsGame = new FpsGame((*rhs.fpsGame).getName(), (*rhs.fpsGame).getNumberOfPlayers());  // make this fpsGame pointer point to a new address
    delete oldFpsGame;                                                                     // delete old this fpsGame unused address

    message = rhs.message;

    return *this;  //return reference to *this
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
    std::cout
        << *fpsGame << "MESSAGE: [" << message << "]" << std::endl
        << "------------------------------" << std::endl;
}