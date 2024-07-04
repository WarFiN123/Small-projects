#include <iostream>

int main() {
  
  double ph = 4.6;
  
  // Write the if, else if, else here:
  
  if (ph > 7) {
    
    std::cout << "Basic" << std::endl;

  } else if (ph < 7) {
    
    std::cout << "Acidic" << std::endl;

  } else {

    std::cout << "Neutral" << std::endl;

  }  
}