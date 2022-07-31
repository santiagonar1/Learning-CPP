#include <iostream>
#include <math.h>

int main(int, char **) {
  double a{0}, b{0}, c{0};

  std::cout
      << "Please indicate the a, b, and c terms of the quadratic equation\n"
      << "ax² + bx + c = 0\n";
  std::cout << "> ";
  std::cin >> a >> b >> c;

  if (a == 0) {
    std::cout << "Solution: " << -c / b << '\n';
    return 0;
  }

  const double inside_sqrt = b * b - 4 * a * c;

  if (inside_sqrt >= 0) {
    // Real solution
    const double sqrt_val = sqrt(inside_sqrt);
    const double x1 = (-b + sqrt_val) / (2 * a);
    const double x2 = (-b - sqrt_val) / (2 * a);

    std::cout << "Solution 1: " << x1 << '\n';
    std::cout << "Solution 2: " << x2 << '\n';
  } else {
    // Imaginary solution
    const double sqrt_val = sqrt(-inside_sqrt);
    std::cout << "Solutions: " << -b / (2 * a) << " ± " << sqrt_val / (2 * a)
              << "i\n";
  }
}
