#include <cmath>
#include <iostream>

int main(int, char**) {
  int n;
  std::cout << "Please enter an integer value:\n";
  std::cin >> n;

  std::cout << "n ==\t" << n << "\nn + 1\t" << n + 1 << "\n3*n\t" << n * 3 << "\nn + n\t"
       << n + n << "\nn*n\t" << n * n << "\nn/2\t" << n / 2 << "\nsqrt(n)\t"
       << std::sqrt((double)n) << '\n';
}
