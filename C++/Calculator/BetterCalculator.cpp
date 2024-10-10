#include <iostream>
#include <string>
#include <vector>
#include <cmath>

std::vector<double> entered_vals = {};

short int amount = 0;

class Calculator
{
public:
    template <typename T>
    double sum(T values)
    {
        double result;
        for (int i = 0; i <= values.size() - 1; i++)
        {
            result += values[i];
        }
        return result;
    }

    template <typename T>
    double minus(T values)
    {
        double result = values[0];
        for (int i = 1; i <= values.size() - 1; i++)
        {
            result -= values[i];
        }
        return result;
    }

    template <typename T>
    double multiply(T values)
    {
        double result = 1;
        for (int i = 1; i <= values.size() - 1; i++)
        {
            result *= values[i];
        }
        return result;
    }

    template <typename T>
    double divide(T values)
    {
        double result = values[0];
        for (int i = 1; i <= values.size() - 1; i++)
        {
            result /= values[i];
        }
        return result;
    }

    template <typename T>
    double mod(T values)
    {
        double result = values[0];
        for (int i = 1; i <= values.size() - 1; i++)
        {
            result = std::fmod(result, values[i]);
        }
        return result;
    }

    template <typename T>
    double power(T a, T b)
    {
        return pow(a, b);
    }
};

void print(double result, std::string choice, short int amount)
{
    std::cout << "The " << choice << " of the " << amount << " numbers are: " << result << std::endl;
}

void enter_nums(std::string op)
{
    Calculator calc;
    if (op == "add" || op == "subtract" || op == "multiply" || op == "divide" || op == "find the remainder of")
    {
        std::cout << "How many numbers do you want to " << op << "?" << std::endl;
        std::cin >> amount;
        for (short int i = amount; i > 0; i--)
        {
            double nums = 0;
            std::cout << "Enter your " << amount - i + 1 << " number: ";
            std::cin >> nums;
            entered_vals.push_back(nums);
        }
        if (op == "add")
        {
            print(calc.sum(entered_vals), "addition", amount);
        }
        else if (op == "subtract")
        {
            print(calc.minus(entered_vals), "difference", amount);
        }
        else if (op == "multiply")
        {
            print(calc.multiply(entered_vals), "product", amount);
        }
        else if (op == "divide")
        {
            print(calc.divide(entered_vals), "division", amount);
        }
        else if (op == "find the remainder of")
        {
            print(calc.mod(entered_vals), "remainder", amount);
        }
    }
}

int main()
{
    std::cout << "Calculator" << std::endl;
    std::cout << "Functions:" << std::endl;
    std::cout << "1. Addition | '+' / 'Add' / 'Addition' / 'Plus' / 'Sum'\n2. Subtraction | '-' / 'Subtract' / 'Subtraction' / 'Minus'\n3. Multiplication | '*' / 'Multiply' / 'Multiplication' / 'Times'\n4. Division | '/' / 'Divide' / 'Division' / 'Divided by'\n5. Modulus | '%' / 'Modulus' / 'Modulo' / 'Remainder'\n6. Exponentiation | '^' / 'Exponent' / 'Exponentiation' / 'Power'\n7. Hypotenuse | 'hypotenuse' / 'Hypotenuse'\n8. Leg | 'leg' / 'Leg'\n9. Circumference of circle | 'c(circle)' / 'Circumference of circle' / 'Circumference of a circle'\n11. Area\n12. Volume\n13. Total surface area" << std::endl;
    std::string choice;

    std::cout << "Enter your choice: ";
    std::getline(std::cin, choice);
    if (choice == "Addition" || choice == "addition" || choice == "+" || choice == "add" || choice == "Add" || choice == "plus" || choice == "Plus" || choice == "sum" || choice == "Sum" || choice == "1")
    {
        enter_nums("add");
    }
    else if (choice == "Subtraction" || choice == "subtraction" || choice == "-" || choice == "minus" || choice == "Minus" || choice == "subtract" || choice == "Subtract" || choice == "2")
    {
        enter_nums("subtract");
    }
    else if (choice == "Multiplication" || choice == "multiplication" || choice == "*" || choice == "product" || choice == "Product" || choice == "into" || choice == "Into" || choice == "3")
    {
        enter_nums("multiply");
    }
    else if (choice == "Division" || choice == "division" || choice == "/" || choice == "Divided by" || choice == "divided by" || choice == "4")
    {
        enter_nums("divide");
    }
    else if (choice == "Modulus" || choice == "modulus" || choice == "Mod" || choice == "mod" || choice == "%" || choice == "Modulo" || choice == "modulo" || choice == "remainder" || choice == "Remainder" || choice == "5")
    {
        enter_nums("find the remainder of");
    }
    else if (choice == "Exponentiation" || choice == "exponentiation" || choice == "^" || choice == "exponent" || choice == "Exponent" || choice == "power" || choice == "Power" || choice == "pow" || choice == "Pow" || choice == "pwr" || choice == "Pwr" || choice == "6")
    {
        std::cout << "Enter the base number: ";
        double base = 0;
        std::cin >> base;
        std::cout << "Enter the exponent: ";
        double exponent = 0;
        std::cin >> exponent;
        Calculator calc;
        print(calc.power(base, exponent), "power", 2);
    }
}