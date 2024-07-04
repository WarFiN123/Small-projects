#include <iostream>

int main() {
  // Add your code below  
  // Weight to mars: W(Mars) = W(Earth) × 3.73(Mars)/(9.81(Earth)

  double earthWeight;
  double marsWeight;

  std::cout << "Enter your weight: ";
  std::cin >> earthWeight;
  marsWeight = earthWeight * 3.73 / 9.81;
  std::cout << "Your weight on Mars would be: " << marsWeight << " kg" << std::endl;
  
  return 0;
}