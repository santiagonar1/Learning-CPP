#include <iostream>

int square(int x);

int main(int, char **) {
  constexpr int count_until = 100;
  for (int i = 0; i < count_until; ++i) {
    std::cout << i << '\t' << square(i) << '\n';
  }
}

int square(int x) {
  int result = 0;
  for (int i = 0; i < x; ++i) {
    result += x;
  }

  return result;
}
