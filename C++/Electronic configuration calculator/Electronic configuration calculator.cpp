#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int electrons = 0;
    std::vector<int> config = {};
    int n = config.size() + 1;
    std::cout << "Please enter the number of electrons: ";
    std::cin >> electrons;
    while (electrons > 0) {
        if (electrons > pow(n, 2) * 2) {
            config.push_back(pow(n, 2) * 2);
            electrons -= pow(n, 2) * 2;
            n = config.size() + 1;
        }
        else if (electrons < pow(n, 2) * 2 || electrons == pow(n, 2) * 2) {
            config.push_back(electrons);
            electrons = 0;
            n = config.size() + 1;
        }
    }

    if (config[config.size() - 1] > 8) {
        int y = config[config.size() - 1] - 8;
        config.pop_back();
        config.push_back(8);
        config.push_back(y);
    }
    std::cout << "Your configuration is: ";
    for (int i = 0; i <= config.size() - 1; i++) {
        std::cout << config[i] << ", ";
    }
    return 0;
}