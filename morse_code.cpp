#include <iostream>
#include <map>
#include <string>
#include <cctype>

// Constants for Morse code symbols
const char DOT = '.';    // ASCII 46
const char DASH = '-';   // ASCII 45

// Morse code mapping for A-Z and space
std::map<char, std::string> morseMap = {
    {'A', std::string() + DOT + DASH},
    {'B', std::string() + DASH + DOT + DOT + DOT},
    {'C', std::string() + DASH + DOT + DASH + DOT},
    {'D', std::string() + DASH + DOT + DOT},
    {'E', std::string() + DOT},
    {'F', std::string() + DOT + DOT + DASH + DOT},
    {'G', std::string() + DASH + DASH + DOT},
    {'H', std::string() + DOT + DOT + DOT + DOT},
    {'I', std::string() + DOT + DOT},
    {'J', std::string() + DOT + DASH + DASH + DASH},
    {'K', std::string() + DASH + DOT + DASH},
    {'L', std::string() + DOT + DASH + DOT + DOT},
    {'M', std::string() + DASH + DASH},
    {'N', std::string() + DASH + DOT},
    {'O', std::string() + DASH + DASH + DASH},
    {'P', std::string() + DOT + DASH + DASH + DOT},
    {'Q', std::string() + DASH + DASH + DOT + DASH},
    {'R', std::string() + DOT + DASH + DOT},
    {'S', std::string() + DOT + DOT + DOT},
    {'T', std::string() + DASH},
    {'U', std::string() + DOT + DOT + DASH},
    {'V', std::string() + DOT + DOT + DOT + DASH},
    {'W', std::string() + DOT + DASH + DASH},
    {'X', std::string() + DASH + DOT + DOT + DASH},
    {'Y', std::string() + DASH + DOT + DASH + DASH},
    {'Z', std::string() + DASH + DASH + DOT + DOT},
    {' ', " "}  // Space between words
};

int main() {
    std::cout << "Enter a short message in English: ";
    std::string input;
    std::getline(std::cin, input);

    // Convert input to uppercase
    for (char& c : input) {
        c = std::toupper(c);
    }

    std::cout << "\nTranslated Morse Code:\n";
    std::string fullMorse = "";
    for (char c : input) {
        if (morseMap.find(c) != morseMap.end()) {
            std::cout << c << ": " << morseMap[c] << std::endl;
            fullMorse += morseMap[c] + "   ";  // 3 spaces between letters
        } else {
            // Handle invalid characters gracefully
            std::cout << c << ": [Invalid Character]" << std::endl;
        }
    }

    std::cout << "\nFull Morse Code Message:\n" << fullMorse << std::endl;

    return 0;
}
