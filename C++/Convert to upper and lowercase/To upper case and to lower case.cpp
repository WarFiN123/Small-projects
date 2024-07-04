#include <iostream>
#include <string>
#include <iomanip>

int main() {
    std::string text;
    std::string upcased_text;
    std::string lowercased_text;

    std::cout << "Enter a string: ";
    std::getline(std::cin, text);

    for(int i = 0; i < text.size(); i++) {
        upcased_text += toupper(text[i]);
        lowercased_text += tolower(text[i]);
    }

    std::cout << "Uppercase: " << upcased_text << std::endl;
    std::cout << "Lowercase: " << lowercased_text << std::endl;
}