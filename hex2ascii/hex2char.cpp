#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

int main() {
    std::string input;
    while (true) {
        std::cout << "Enter a value (hexadecimal with '0x' prefix or ASCII, q to quit): ";
        std::cin >> input;
        if (input == "q") break;

        if (input.find("0x") == 0) {
            // Hexadecimal to ASCII conversion
            int value;
            std::stringstream ss;
            ss << std::hex << input.substr(2); // Remove '0x' prefix
            ss >> value;

            if (!ss.fail() && ss.eof()) {
                std::cout << "ASCII: " << static_cast<char>(value) << std::endl;
            }
            else {
                std::cout << "Invalid hexadecimal input." << std::endl;
            }
        }
        else {
            // ASCII to hexadecimal conversion
            std::stringstream ss;
            ss << std::hex << std::uppercase << static_cast<int>(input[0]);
            std::cout << "Hexadecimal: 0x" << ss.str() << std::endl;
        }
    }
    return 0;
}
