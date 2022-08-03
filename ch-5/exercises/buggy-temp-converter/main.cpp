#include <iostream>

double ctok(double c);

int main(int, char **) {
  double c = 0;
  std::cout << "Introduce temp. in Celsius\n";
  std::cout << "> ";
  std::cin >> c;
  double k = ctok(c);
  std::cout << k << '\n';
}

double ctok(double c) {
  constexpr double c_to_k_ratio = 273.5;
  double k = c + c_to_k_ratio;
  return k;
}
