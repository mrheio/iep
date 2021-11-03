#include "../include/Exception.hpp"

std::string Exception::getMessage() {
    return message;
}

void Exception::setMessage(std::string message) {
    this->message = message;
}

void Exception::printMessage() {
    std::cout << message << std::endl;
}