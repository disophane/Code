//
// Created by diso on 12/31/24.
//

#include <iostream>

int main() {
  std::cout << "Welcome to calculator" << std::endl;
  std::cout << "Which function do you want to perform?" << std::endl;
  std::cout << " 1 - Addition\n 2- Subtraction\n 3 - Multiplication\n 4 - Division\n 5- About" << std::endl;
  int operation;
  std::cin >> operation;
  switch (operation) {
    case 1:
      std::cout << "Enter the first number: " << std::endl;
      float firstNumber;
      std::cin >> firstNumber;
      std::cout << "Enter the second number: " << std::endl;
      float secondNumber;
      std::cin >> secondNumber;
      float  const result = firstNumber + secondNumber;
      std::cout << "Result: " << result << std::endl;
      return 0;

    case 2:
      std::cout << "Enter the first number: " << std::endl;
      std::cin >> firstNumber;
      std::cout << "Enter the second number: " << std::endl;
  }
}