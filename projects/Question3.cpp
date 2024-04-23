#include <iostream>
#include <string>

int main() {
   
    std::string elems[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
    
    
    for (const std::string& elem : elems) {
       
        if (elem[0] == 'B') {
           
            std::cout << elem << std::endl;
        }
    }

    return 0;
}
