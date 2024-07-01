#include <iostream>
#include <string>
#include <iomanip>

int main() {
    //Check for blank characters
    std::string text;
    int blank_digits = 0;
    std::cout << "Enter a string: ";
    std::getline(std::cin, text);

    for (int i = 0; i < text.size(); i++) {
        if (std::isblank(text[i])) {
            blank_digits++;
        }
    }

    std::cout << "Blank digits found: " << blank_digits << std::endl;
}