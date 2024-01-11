#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string input;
    while (true) {
        std::cout << "Enter a hexadecimal value (q to quit): ";
        std::cin >> input;
        if (input == "q") break;

        int value;
        std::stringstream ss;
        ss << std::hex << input;
        ss >> value;

        if (!ss.fail() && ss.eof()) {
            std::cout << "ASCII: " << static_cast<char>(value) << std::endl;
        }
        else {
            std::cout << "Invalid hexadecimal input." << std::endl;
        }
    }
    return 0;
}

