#include <iostream>
#include <limits>

int main() {
    int userInput;

   
    std::cout << "Please enter an integer value between 5 and 10: ";
    std::cin >> userInput;

    
    while (userInput < 5 || userInput > 10 || std::cin.fail()) {
        std::cin.clear();  
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  
        std::cout << "Invalid input. Please enter an integer value between 5 and 10: ";
        std::cin >> userInput;
    }

    
    std::cout << "Your input value (" << userInput << ") has been accepted." << std::endl;

    return 0;
}
