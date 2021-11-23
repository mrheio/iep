#include "../include/CodeException.hpp"
#include "../include/Exception.hpp"
#include "../include/FpsGame.hpp"
#include "../include/GamingService.hpp"

int main() {
    Exception exception1;  // default generated constructor called
    exception1.setMessage("exception 1 message");
    exception1.printMessage();
    Exception exception2(exception1);  // default generated copy constructor called
    exception2.printMessage();
    exception2.setMessage("exception 2 message");
    exception2.printMessage();
    Exception exception3 = exception1;  // default generated copy constructor called
    exception3.printMessage();
    exception3 = exception2;  // default generated copy assignment operator called
    exception3.printMessage();
    exception3.setMessage("exception 3 message");

    Exception exception4, exception5, exception6;
    exception4.setMessage("exception 4 message");
    exception6 = exception5 = exception4;
    exception6.printMessage();

    FpsGame* fpsGame = new FpsGame("Doom", 1);

    CodeException codeException1(404, fpsGame, "Not found");
    CodeException codeException2(codeException1);
    codeException2.printMessage();
    codeException2.setMessage("Doom was not found");

    CodeException codeException3;
    codeException3 = codeException2;
    codeException3.printMessage();

    return 0;
}
