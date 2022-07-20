#include <iostream>

int main(int, char **) {
  std::cout << "> ";

  double val1 = 0;
  double val2 = 0;
  while (std::cin >> val1 >> val2) {
    if (val1 < val2) {
      std::cout << "Smaller is: " << val1 << "\tLarger is: " << val2 << '\n';
    } else if (val2 < val1) {
      std::cout << "Smaller is: " << val2 << "\tLarger is: " << val1 << '\n';
    } else {
      std::cout << "Numbers are equal\n";
    }
  }
}
