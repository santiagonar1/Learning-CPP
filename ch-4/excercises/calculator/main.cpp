#include <iostream>

int main(int, char **) {
  double val1 = 0;
  double val2 = 0;
  char operation = ' ';

  std::cout << "Please indicate the calculation in the format val1 val2 "
               "<operation>\n";
  std::cout << "> ";
  std::cin >> val1 >> val2 >> operation;

  switch (operation) {
  case '+':
    std::cout << val1 << " + " << val2 << " = " << val1 + val2 << '\n';
    break;
  case '-':
    std::cout << val1 << " - " << val2 << " = " << val1 - val2 << '\n';
    break;
  case '*':
    std::cout << val1 << " * " << val2 << " = " << val1 * val2 << '\n';
    break;
  case '/':
    if (val2 != 0) {
      std::cout << val1 << " / " << val2 << " = " << val1 / val2 << '\n';
    } else {
      std::cout << "Division by 0 not allowed\n";
    }
    break;

  default:
    std::cout << "Operation " << operation << " not recognized\n";
    break;
  }
}
