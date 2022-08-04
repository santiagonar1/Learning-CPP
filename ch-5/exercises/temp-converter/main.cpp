#include <iostream>

class TempError {};

double c_to_f(const double c);
double f_to_c(const double f);

int main(int, char **) {
  double c = 0;
  double f = 0;
  try {
    std::cout << "Please indicate the temperature in C\n";
    std::cout << "> ";
    std::cin >> c;
    std::cout << c_to_f(c) << " F\n";

    std::cout << "Please indicate the temperature in F\n";
    std::cout << "> ";
    std::cin >> f;
    std::cout << f_to_c(f) << " C\n";
    return 0;
  } catch (TempError) {
    std::cout << "ERROR: Temperature too low\n";
    return 1;
  }
}

double c_to_f(const double c) {
  constexpr double absolute_zero = -273.15;
  if (c < absolute_zero)
    throw TempError{};
  const double f = (9.0 / 5.0) * c + 32;
  return f;
}

double f_to_c(const double f) {
  constexpr double absolute_zero = -459.67;
  if (f < absolute_zero)
    throw TempError{};
  const double c = (f - 32) * 5.0 / 9.0;
  return c;
}
