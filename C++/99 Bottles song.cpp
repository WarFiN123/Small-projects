#include <iostream>

int main() {

  // Write a for loop here:
  
  for(int i = 99; i > 0; i--) {
    std::cout << i << " bottles of pop on the wall.\n" << "Take one down and pass it around\n" << i - 1 << " bottles of pop on the wall\n";
  }
}