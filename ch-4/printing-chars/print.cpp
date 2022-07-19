#include <iostream>

int main(int, char **) {

  for (char c = 'a'; c <= 'z'; ++c) {
    std::cout << c << '\t' << int(c) << '\n';
  }

  std::cout << "\n******************\n";
  for (char c = 'A'; c <= 'Z'; ++c) {
    std::cout << c << '\t' << int(c) << '\n';
  }

  std::cout << "\n******************\n";
  for (char c = '0'; c <= '9'; ++c) {
    std::cout << c << '\t' << int(c) << '\n';
  }
}
