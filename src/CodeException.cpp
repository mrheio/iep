#include "../include/CodeException.hpp"

CodeException::CodeException() : Exception(), code(0){};

CodeException::CodeException(const CodeException& rhs) : Exception(rhs), code(rhs.code) {
    std::cout << "CodeException copy constructor called" << std::endl;
};  // call super copy constructor to init super variables and after init particular variables

CodeException::CodeException(int code, FpsGame* fpsGame, std::string message) : Exception(fpsGame, message), code(code){};

CodeException& CodeException::operator=(const CodeException& rhs) {
    std::cout << "CodeException assignment operator called" << std::endl;

    Exception::operator=(rhs);  // call super assignment operator to assign super variables and after assign particular variables
    code = rhs.code;

    return *this;  // return a reference to *this
}

void CodeException::printMessage() {
    std::cout << "CODE: [" << code << "]" << std::endl;
    Exception::printMessage();
}