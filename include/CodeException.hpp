#include <iostream>
#include <string>

#include "Exception.hpp"
#include "FpsGame.hpp"
#ifndef CODEEXCEPTION_H
#define CODEEXCEPTION_H

class CodeException : public Exception {
   private:
    int code;

   public:
    CodeException();
    CodeException(int code, FpsGame* fpsGame, std::string message);
    CodeException(const CodeException& rhs);
    CodeException& operator=(const CodeException& rhs);
};
#endif