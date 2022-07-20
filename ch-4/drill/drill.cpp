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

  constexpr double cm_in_m = 100;
  constexpr double cm_in_inch = 2.54;
  constexpr double inch_in_ft = 12;
  double sum = 0;

  std::cout << "> ";
  while (std::cin >> val >> unit) {
    if (std::find(valid_units.begin(), valid_units.end(), unit) !=
        valid_units.end()) {

      if (unit == "cm") {
        val /= cm_in_m;
      } else if (unit == "in") {
        val = (val * cm_in_inch) / cm_in_m;
      } else if (unit == "ft") {
        const double val_in_inch = val * inch_in_ft;
        val = (val_in_inch * cm_in_inch) / cm_in_m;
      }

      sum += val;

      if (val < smallest) {
        std::cout << "The smallest so far: " << val << "m\n";
        smallest = val;
      }

      if (largest < val) {
        std::cout << "The largest so far: " << val << "m\n";
        largest = val;
      }

    } else {
      std::cout << unit << " not recognized\n";
    }
  }

  std::cout << "Total: " << sum << "m\n";
}
