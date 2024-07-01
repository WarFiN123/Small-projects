#include <iostream>

int main() {
    //Checks if the year is a leap year or not
    int year;
    int remainder;
    std::cout << "Enter a year: ";
    std::cin >> year;

    remainder = year % 4;
    if (remainder == 0) {
        std::cout << year << " is a leap year." << std::endl;
    } else {
        std::cout << year << " is not a leap year." << std::endl;
    }
}