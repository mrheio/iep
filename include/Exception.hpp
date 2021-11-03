#include <iostream>
#ifndef EXCEPTION_H
#define EXCEPTION_H

class Exception {
   private:
    std::string message;

   public:
    std::string getMessage();
    void setMessage(std::string message);
    void printMessage();
};
#endif