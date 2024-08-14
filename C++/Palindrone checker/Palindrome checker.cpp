#include <iostream>
#include <string>

// Define is_palindrome() here:
bool is_palindrome(std::string text) {
  std::string reversed_text = "";

  for (int i = text.size() - 1; i >= 0; i--) {
    reversed_text += text[i];
  }

  if (text == reversed_text) {
    return true;
  } else {
    return false;
  }
}

int main() {
  
  std::string text;
  std::cout << "Enter a string: ";
  std::getline(std::cin, text);

  if (is_palindrome(text)) {
    std::cout << text << " is a palindrome." << std::endl;
  } else {
    std::cout << text << " is not a palindrome." << std::endl;
  }

  system("pause");
}