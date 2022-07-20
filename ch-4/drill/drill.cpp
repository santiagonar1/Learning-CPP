#include <algorithm>
#include <cmath>
#include <iostream>
#include <limits>
#include <string>
#include <vector>

int main(int, char **) {
  double val = 0;
  std::string unit = "";
  const std::vector<std::string> valid_units = {"cm", "m", "in", "ft"};
  double smallest = std::numeric_limits<double>::max();
  double largest = std::numeric_limits<double>::min();

  std::cout << "> ";
  while (std::cin >> val >> unit) {
    if (std::find(valid_units.begin(), valid_units.end(), unit) !=
        valid_units.end()) {
      if (val < smallest) {
        std::cout << "The smallest so far: " << val << '\n';
        smallest = val;
      }

      if (largest < val) {
        std::cout << "The largest so far: " << val << '\n';
        largest = val;
      }
    } else {
        std::cout << unit << " not recognized\n";
    }
  }
}
