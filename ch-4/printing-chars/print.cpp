#include <iostream>

int main(int, char **) {

  for (char c = 'a'; c <= 'z'; ++c) {
    std::cout << c << '\t' << int(c) << '\n';
  }
}
