#include <iostream>
#include <cmath>
#include <string>
#include "functions.h"

// Simple calculator

int main()
{
    long double num1, num2, num3 = 0;
    std::string operation;
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cin.ignore();

    std::cout << "Enter the operation (+, -, x, /, %, ^, hypotenuse, leg, a(rect), a(circle), c(circle), a(tri), v(cube), v(cuboid), v(tri prism), tsa(cuboid), tsa(cube), v(cylinder)): ";
    std::getline(std::cin, operation);

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    if (operation == "v(cuboid)" || operation == "v(tri prism)" || operation == "tsa(cuboid)")
    {
        std::cout << "Enter the third number : ";
        std::cin >> num3;
    }

    auto result = calculate(num1, num2, num3, operation);

    std::cout << "Result: " << result << std::endl;

    system("pause");
    return 0;
}
