#include <iostream>

int main(int, char **) {
  double d = 0;

  while (std::cin >> d) {
    int i = d;
    char c = i;
    int i2 = c;

    std::cout << "d\t" << d << "\ni\t" << i << "\ni2\t" << i2 << "\nchar\t" << c
              << "\n";
  }
}
