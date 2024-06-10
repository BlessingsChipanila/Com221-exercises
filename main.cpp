#include <iostream>
#include "Rectangle.h"

int main() {
   
    Rectangle rect;

   
    float length, width;

    
    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;
    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;

   
    rect.setLength(length);
    rect.setWidth(width);

   
    float area = rect.calculateArea();
    std::cout << "The area of the rectangle is: " << area << std::endl;

    return 0;
}
