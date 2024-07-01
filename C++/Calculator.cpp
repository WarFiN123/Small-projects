#include <iostream>
#include <cmath>
#include <string>

// Simple calculator
long double num1, num2, num3 = 0;
std::string operation;

long double hypotnuse_cal(long double a, long double b) {
    return sqrt(a * a + b * b);
}

long double leg_cal(long double num1, long double num2) {
    return sqrt(num1 * num1 - num2 * num2);
}

long double calculate(long double num1, long double num2, long double num3, std::string operation) {
    if (operation == "+") {
        return num1 + num2;
    } else if (operation == "-") {
        return num1 - num2;
    } else if (operation == "x") {
        return num1 * num2;
    } else if (operation == "/") {
        return num1 / num2;
    } else if (operation == "%") {
        return static_cast<int>(num1) % static_cast<int>(num2);
    } else if (operation == "^") {
        return pow(num1, num2);
    } else if (operation == "hypotenuse") {
        return hypotnuse_cal(num1, num2);
    }else if (operation == "leg") {
        return leg_cal(num1, num2);
    } else if (operation == "a(rect)") {
        return num1 * num2;
    } else if (operation == "a(circle)") {
        return M_PI * num1 * num1;
    } else if (operation == "c(circle)") {
        return 2 * M_PI * num1;
    } else if (operation == "a(tri)") {
        return 0.5 * num1 * num2;
    } else if (operation == "v(cube)") {
        return pow(num1, 3);
    } else if (operation == "v(cuboid)") {
        return num1 * num2 * num3;
    } else if (operation == "v(tri prism)") {
        return 0.5 * num1 * num2 * num3;
    } else if (operation == "tsa(cuboid)") {
        return 2 * (num1 * num2 + num1 * num3 + num2 * num3);
    } else if (operation == "tsa(cube)") {
        return 6 * pow(num1, 2);
    } else if (operation == "v(cylinder)") {
        return pow(num1, 2) * M_PI * num2;
    } else {
        std::cout << "Invalid operation" << std::endl;
        return 1;
    }
}

int main() {
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cin.ignore();

    std::cout << "Enter the operation (+, -, x, /, %, ^, hypotenuse, leg, a(rect), a(circle), c(circle), a(tri), v(cube), v(cuboid), v(tri prism), tsa(cuboid), tsa(cube), v(cylinder)): ";
    std::getline(std::cin, operation);

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    if (operation == "v(cuboid)" || operation == "v(tri prism)" || operation == "tsa(cuboid)") { 
    std::cout << "Enter the third number : ";
    std::cin >> num3;
    }
    
    long double result = calculate(num1, num2, num3, operation);

    std::cout << "Result: " << result << std::endl;

    system("pause");
    return 0;
}
