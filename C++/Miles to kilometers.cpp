#include <iostream>

int main() {
  double miles;
  double kilometers;

  std::cout << "Enter your distance in miles: ";
  std::cin >> miles;

  kilometers = miles * 1.6;
  std::cout << "Your distance in kilometers would be: " << kilometers << std::endl;
  
  return 0;
}