#include <iostream>

int main() {
  double earth;
  double output = 0;
  std::string planet;
  
  std::cout << "Whats your weight in kgs? ";
  std::cin >> earth;

  std::cout << "Please type the name of the planet you would like to fight on: ";
  std::cin >> planet;

  if (planet == "Mercury") {
    output = earth * 0.38;
    std::cout << "Your weight on " << planet << " would be: " << output << "\n";
    return 0;
  } else if (planet == "Venus") {
    output = 0.91 * earth;
    std::cout << "Your weight on " << planet << " would be: " << output << "\n";
    return 0;
  } else if (planet == "Mars") {
    output = 0.38 * earth;
    std::cout << "Your weight on " << planet << " would be: " << output << "\n";
    return 0;
  } else if (planet == "Jupiter") {
    output = earth * 2.34;
    std::cout << "Your weight on " << planet << " would be: " << output << "\n";
    return 0;
  } else if (planet == "Saturn") {
    output = earth * 1.06;
    std::cout << "Your weight on " << planet << " would be: " << output << "\n";
    return 0;
  } else if (planet == "Uranus") {
    output = earth * 0.92;
    std::cout << "Your weight on " << planet << " would be: " << output << "\n";
    return 0;
  } else if (planet == "Neptune") {
    output = earth * 1.19;
    std::cout << "Your weight on " << planet << " would be: " << output << "\n";
    return 0;
  } else {
    std::cout << "Are you sure you typed the name of the planet correctly?\n";
    return 1;
  }
}