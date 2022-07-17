#include <iostream>

int main(int, char **) {
  int number{0};

  std::cout << "Write one integer number: \n";
  std::cout << "> ";
  std::cin >> number;

  if (number % 2 == 0) {
    std::cout << "Number is even\n";
  } else {
    std::cout << "Number is odd\n";
  }
}
