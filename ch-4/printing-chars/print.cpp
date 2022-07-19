#include <iostream>

int main(int, char **) {
  char c = 'a';

  while (c <= 'z') {
    std::cout << c << '\t' << int(c) << '\n';
    ++c;
  }
}
