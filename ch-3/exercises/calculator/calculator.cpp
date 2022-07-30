#include <iostream>

int main(int, char **) {
  int val1{0}, val2{0};
  double dval1{0}, dval2{0};

  std::cout << "Enter two integers separated by a space: \n";
  std::cout << "> ";
  std::cin >> val1 >> val2;
  std::cout << "Enter two floats separated by a space: \n";
  std::cout << "> ";
  std::cin >> dval1 >> dval2;

  if (val1 < val2) {
    std::cout << val1 << " is smaller than " << val2 << '\n';
  } else if (val2 < val1) {
    std::cout << val2 << " is smaller than " << val1 << '\n';
  } else {
    std::cout << "Both values are the same\n";
  }

  std::cout << val1 << " + " << val2 << "\t" << val1 + val2 << "\n";
  std::cout << val1 << " - " << val2 << "\t" << val1 - val2 << "\n";
  std::cout << val1 << " * " << val2 << "\t" << val1 * val2 << "\n";
  if (val2 != 0) {
    std::cout << val1 << " / " << val2 << "\t" << val1 / val2 << "\n";
  }

  if (dval1 < dval2) {
    std::cout << dval1 << " is smaller than " << dval2 << '\n';
  } else if (dval2 < dval1) {
    std::cout << dval2 << " is smaller than " << dval1 << '\n';
  } else {
    std::cout << "Both values are the same\n";
  }

  std::cout << dval1 << " + " << dval2 << "\t" << dval1 + dval2 << "\n";
  std::cout << dval1 << " - " << dval2 << "\t" << dval1 - dval2 << "\n";
  std::cout << dval1 << " * " << dval2 << "\t" << dval1 * dval2 << "\n";
  if (dval2 != 0) {
    std::cout << dval1 << " / " << dval2 << "\t" << dval1 / dval2 << "\n";
  }
}