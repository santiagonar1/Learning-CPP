#include <iostream>
#include <math.h>

int main(int, char **) {
  double a{0}, b{0}, c{0};

  std::cout
      << "Please indicate the a, b, and c terms of the quadratic equation\n"
      << "ax² + bx + c = 0\n";
  std::cout << "> ";
  std::cin >> a >> b >> c;

  const double inside_sqrt = b * b - 4 * a * c;

  if (inside_sqrt < 0) {
    std::cout << "ERROR: No real roots\n";
    return 1;
  } else if (a == 0) {
    std::cout << "ERROR: No quadratic function\n";
    return 2;
  }

  const double sqrt_val = sqrt(inside_sqrt);
  const double x1 = (-b + sqrt_val) / 4 * a;
  const double x2 = (-b - sqrt_val) / 4 * a;

  std::cout << "X1: " << x1 << "\tX2: " << x2 << '\n';
}
