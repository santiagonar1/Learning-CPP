#include <iostream>
#include <string>

int main(int, char **) {
  std::string operation{" "};
  double val1{0}, val2{0};

  std::cout << "Indicate [operand] [val1] [val2]\n";
  std::cout << "> ";
  std::cin >> operation >> val1 >> val2;

  if (operation == "+") {
    std::cout << val1 + val2 << "\n";
  } else if (operation == "-") {
    std::cout << val1 - val2 << "\n";
  } else if (operation == "*") {
    std::cout << val1 * val2 << "\n";
  } else if (operation == "/") {
    if (val2 != 0) {
      std::cout << val1 / val2 << "\n";
    } else {
      std::cout << "Division by 0 not allowed\n";
    }
  }
}
