#include <iostream>

int main(int, char **) {
  constexpr double dollar_per_yen = 0.0072;
  constexpr double dollar_per_kroner = 0.099;
  constexpr double dollar_per_pound = 1.2;

  char c{0};
  double money{0};

  std::cout << "Please indicate the amount followed by the currency: (y)en, "
               "(k)roner or (p)ounds\n";
  std::cout << "> ";
  std::cin >> money >> c;

  if (c == 'y') {
    std::cout << money << " dollars =" << money * dollar_per_yen << " yen\n";
  } else if (c == 'k') {
    std::cout << money << " dollars =" << money * dollar_per_kroner
              << " kroner\n";
  } else if (c == 'p') {
    std::cout << money << " dollars =" << money * dollar_per_pound
              << " pounds\n";
  } else {
    std::cout << "I cannot recognize " << c << "\n";
  }
}
