#include <iostream>

class TemperatureError {};

double ctok(double c);

int main(int, char **) {
  double c = 0;
  std::cout << "Introduce temp. in Celsius\n";
  std::cout << "> ";
  std::cin >> c;
  try {
    double k = ctok(c);
    std::cout << k << '\n';
  } catch (TemperatureError) {
    return 1;
  }
}

double ctok(double c) {
  constexpr double c_to_k_ratio = 273.5;
  constexpr double absolute_zero = -273.5;

  if (c < absolute_zero) {
    std::cout << "Error: Temperature below " << absolute_zero << "\n";
    throw TemperatureError{};
  }

  double k = c + c_to_k_ratio;
  return k;
}
