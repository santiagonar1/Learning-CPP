#include <iostream>

class TemperatureError {};

double ctok(double c);
double ktoc(double k);

int main(int, char **) {
  try {
    double c = 0;
    std::cout << "Introduce temp. in Celsius\n";
    std::cout << "> ";
    std::cin >> c;
    double k = ctok(c);
    std::cout << k << '\n';

    std::cout << "Introduce temp. in Kelvin\n";
    std::cout << "> ";
    std::cin >> k;
    c = ktoc(k);
    std::cout << c << '\n';
  } catch (TemperatureError) {
    return 1;
  }
}

double ctok(double c) {
  constexpr double c_to_k_ratio = 273.5;
  constexpr double absolute_zero = -273.5;

  if (c < absolute_zero) {
    std::cout << "Error: Temperature below " << absolute_zero << "C \n";
    throw TemperatureError{};
  }

  double k = c + c_to_k_ratio;
  return k;
}

double ktoc(double k) {
  constexpr double k_to_c_ratio = -273.5;
  constexpr double absolute_zero = 0;

  if (k < absolute_zero) {
    std::cout << "Error: Temperature below " << absolute_zero << "K \n";
    throw TemperatureError{};
  }

  double c = k + k_to_c_ratio;
  return c;
}