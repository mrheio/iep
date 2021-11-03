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

    std::cout << "---------------------------------------------------------------------------------" << std::endl;

    GamingService& gamingService = GamingService::getInstance();
    int choice;
    for (;;) {
        gamingService.printMenu();
        std::cin >> choice;
        switch (choice) {
            case 1: {
                gamingService.createAndAddGame("fps");
                break;
            }
            case 2: {
                gamingService.createAndAddGame("adventure");
                break;
            }
            case 3: {
                gamingService.createAndAddGame("strategy");
                break;
            }
            case 4: {
                gamingService.printGames();
                break;
            }
            case 5: {
                gamingService.removeGame();
                break;
            }
            case 6: {
                gamingService.removeAll();
                break;
            }
            case 7: {
                gamingService.playGame();
                break;
            }
            default: {
                GamingService::removeAll();
                return 0;
            }
        }
    }
    GamingService::removeAll();
    return 0;
}
