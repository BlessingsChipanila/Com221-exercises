#include <iostream>


double triangleArea(double base, double height);
double rectangleArea(double length, double width);
double squareArea(double side);

int main() {
    char choice;
    double base, height, length, width, side;

    do {
        
        std::cout << "Select a shape to calculate the area:" << std::endl;
        std::cout << "1. Triangle" << std::endl;
        std::cout << "2. Rectangle" << std::endl;
        std::cout << "3. Square" << std::endl;
        std::cout << "0. to quit" << std::endl;
        std::cout << "Your choice: ";
        std::cin >> choice;

       
        switch (choice) {
            case '1': {
                std::cout << "Enter the base and height of the triangle: ";
                std::cin >> base >> height;
                std::cout << "Area of the triangle: " << triangleArea(base, height) << std::endl;
                break;
            }
            case '2': {
                std::cout << "Enter the length and width of the rectangle: ";
                std::cin >> length >> width;
                std::cout << "Area of the rectangle: " << rectangleArea(length, width) << std::endl;
                break;
            }
            case '3': {
                std::cout << "Enter the side length of the square: ";
                std::cin >> side;
                std::cout << "Area of the square: " << squareArea(side) << std::endl;
                break;
            }
            case '0':
                std::cout << "Exiting program..." << std::endl;
                return 0;
            default:
                std::cout << "Invalid input. Please enter a valid choice." << std::endl;
        }

    } while (true);

    return 0;
}


double triangleArea(double base, double height) {
    return 0.5 * base * height;
}


double rectangleArea(double length, double width) {
    return length * width;
}


double squareArea(double side) {
    return side * side;
}