#include <iostream>

int main(int, char **) {
  std::cout << "> ";

  int val1 = 0;
  int val2 = 0;
  while (std::cin >> val1 >> val2) {
    if (val1 < val2) {
      std::cout << "Smaller is: " << val1 << "\tLarger is: " << val2 << '\n';
    } else if (val2 < val1) {
      std::cout << "Smaller is: " << val2 << "\tLarger is: " << val1 << '\n';
    }
  }
}
