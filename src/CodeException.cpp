#include "../include/CodeException.hpp"

CodeException::CodeException() : Exception(), code(0){};

CodeException::CodeException(const CodeException& rhs) : Exception(rhs), code(rhs.code) {
    std::cout << "CodeException copy constructor called" << std::endl;
};

CodeException::CodeException(int code, FpsGame* fpsGame, std::string message) : Exception(fpsGame, message), code(code){};

CodeException& CodeException::operator=(const CodeException& rhs) {
    std::cout << "CodeException assignment operator called" << std::endl;

    Exception::operator=(rhs);
    code = rhs.code;

    return *this;
}