#include <iostream>

int main() {
    char userInput;

    while (true) {
        std::cout << "Enter 'o' to exit: ";
        std::cin >> userInput;

        if (userInput == 'o') {
            std::cout << "Exiting the while loop. Goodbye!" << std::endl;
            break;
        } else {
            std::cout << "You entered: " << userInput << std::endl;
        }
    }

    return 0;
}
