#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <cctype>


int Vowels(const std::string& str) {
    int count = 0;
    for (char c : str) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            count++;
        }
    }
    return count;
}


int Words(const std::string& str) {
    int count = 0;
    bool inWord = false;
    for (char c : str) {
        if (std::isspace(c)) {
            inWord = false;
        } else {
            if (!inWord) {
                count++;
                inWord = true;
            }
        }
    }
    return count;
}


std::string reverse(const std::string& str) {
    return std::string(str.rbegin(), str.rend());
}


std::string capitalizeSecondLetter(const std::string& str) {
    std::string result = str;
    bool capitalize = false;
    for (char& c : result) {
        if (std::isalpha(c)) {
            if (capitalize) {
                c = std::toupper(c);
                capitalize = false;
            } else {
                capitalize = true;
            }
        } else {
            capitalize = false;
        }
    }
    return result;
}

int main() {
    
    std::ifstream file("textfile.txt");
    if (!file.is_open()) {
        std::cerr << "Error opening file!" << std::endl;
        return 1;
    }

    
    std::string fileData;
    std::getline(file, fileData);

  
    file.close();

   
    int vowelCount = Vowels(fileData);
    std::cout << "Number of vowels: " << vowelCount << std::endl;

    
    int wordCount = Words(fileData);
    std::cout << "Number of words: " << wordCount << std::endl;

    
    std::cout << "Reverse statement: " << reverse(fileData) << std::endl;

    
    std::cout << "Capitalization of second letter: " << capitalizeSecondLetter(fileData) << std::endl;

    return 0;
}