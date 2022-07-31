#include <iostream>

int main(int, char **) {
  constexpr double dollar_per_yen = 0.0072;
  constexpr double dollar_per_kroner = 0.099;
  constexpr double dollar_per_pound = 1.2;
  constexpr double dollar_per_yuan = 0.15;

  char c{0};
  double money{0};

  std::cout << "Please indicate the amount followed by the currency: (y)en, "
               "(k)roner, (p)ounds, or y(u)an\n";
  std::cout << "> ";
  std::cin >> money >> c;

  switch (c) {
  case 'y':
    std::cout << money << " dollars =" << money * dollar_per_yen << " yen\n";
    break;
  case 'k':
    std::cout << money << " dollars =" << money * dollar_per_kroner
              << " kroner\n";
    break;
  case 'p':
    std::cout << money << " dollars =" << money * dollar_per_pound
              << " pounds\n";
    break;
  case 'u':
    std::cout << money << " dollars =" << money * dollar_per_yuan << " yuan\n";
    break;
  default:
    std::cout << "I cannot recognize " << c << "\n";
    break;
  }
}
