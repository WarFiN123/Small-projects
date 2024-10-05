#include <iostream>
#include <string>
#include <vector>

class Calculator {
    public:
        template <typename T>
        double sum(T values) {
            double result;
            for (int i = 0; i <= values.size() - 1; i++) {
                result += values[i];
            }
            return result;
        }

        template <typename T>
        double minus(T values) {
            double result = values[0];
            for (int i = 1; i <= values.size() - 1; i++) {
                result -= values[i];
            }
            return result;
        }
};

void print(double result, std::string choice, short int amount) {
    if (choice == "minus") {
        std::cout << "The difference of the " << amount << " numbers are: " << result << std::endl;
    }
}
int main() {
    std::cout << "Calculator" << std::endl;
    std::cout << "Functions:" << std::endl;
    std::cout << "1. Addition | '+' / 'Add' / 'Addition' / 'Plus' / 'Sum'\n2. Subtraction | '-' / 'Subtract' / 'Subtraction' / 'Minus'\n3. Multiplication | '*' / 'Multiply' / 'Multiplication' / 'Times'\n4. Division | '/' / 'Divide' / 'Division' / 'Divided by'\n5. Modulus | '%' / 'Modulus' / 'Modulo' / 'Remainder'\n6. Exponentiation | '^' / 'Exponent' / 'Exponentiation' / 'Power'\n7. Hypotenuse | 'hypotenuse' / 'Hypotenuse'\n8. Leg | 'leg' / 'Leg'\n9. Circumference of circle | 'c(circle)' / 'Circumference of circle' / 'Circumference of a circle'\n11. Area\n12. Volume\n13. Total surface area" << std::endl;

    Calculator calc;
    std::string choice;
    std::vector<double> entered_vals = {};

    std::cout << "Enter your choice: ";
    std::getline(std::cin, choice);
    if ( choice == "Addition" || choice == "addition" || choice == "+" || choice == "add" || choice == "Add" || choice == "plus" || choice == "Plus" || choice =="sum" || choice == "Sum") {
        std::cout << "How many numbers do you want to add?" << std::endl;
        short int amount = 0; 
        std::cin >> amount;
        for (short int i = amount; i > 0; i--) {
            double nums = 0;
            std::cout << "Enter your " << amount - i + 1 << " number: ";
            std::cin >> nums;
            entered_vals.push_back(nums);
        }
        
        print(calc.sum(entered_vals), "add", amount);
    }
    else if ( choice == "Subtraction" || choice == "subtraction" || choice == "-" || choice == "minus" || choice == "Minus" || choice == "subtract" || choice == "Subtract") {
                std::cout << "How many numbers do you want to subtract?" << std::endl;
        short int amount = 0; 
        std::cin >> amount;
        for (short int i = amount; i > 0; i--) {
            double nums = 0;
            std::cout << "Enter your " << amount - i + 1 << " number: ";
            std::cin >> nums;
            entered_vals.push_back(nums);
        }
        
        print(calc.minus(entered_vals), "minus", amount);
    }
}