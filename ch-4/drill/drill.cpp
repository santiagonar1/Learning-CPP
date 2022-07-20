#include <algorithm>
#include <cmath>
#include <iostream>
#include <limits>
#include <string>
#include <vector>

double cm_to_m(double val_in_cm);
double inch_to_cm(double val_in_inch);
double inch_to_m(double val_in_inch);
double ft_to_inch(double val_in_ft);
double ft_to_m(double val_in_ft);

int main(int, char **) {
  double val = 0;
  std::string unit = "";
  const std::vector<std::string> valid_units = {"cm", "m", "in", "ft"};
  double smallest = std::numeric_limits<double>::max();
  double largest = std::numeric_limits<double>::min();

  double sum = 0;
  std::vector<double> values;

  std::cout << "> ";
  while (std::cin >> val >> unit) {
    if (std::find(valid_units.begin(), valid_units.end(), unit) !=
        valid_units.end()) {

      if (unit == "cm") {
        val = cm_to_m(val);
      } else if (unit == "in") {
        val = inch_to_m(val);
      } else if (unit == "ft") {
        val = ft_to_m(val);
      }

      values.push_back(val);
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

  std::sort(values.begin(), values.end());
  for (double val : values) {
    std::cout << val << "m\n";
  }
  std::cout << "Total: " << sum << "m\n";
}

double cm_to_m(double val_in_cm) {
  constexpr double cm_in_m = 100;
  return val_in_cm / cm_in_m;
}

double inch_to_cm(double val_in_inch) {
  constexpr double cm_in_inch = 2.54;
  return val_in_inch * cm_in_inch;
}

double inch_to_m(double val_in_inch) {
  return cm_to_m(inch_to_cm(val_in_inch));
}

double ft_to_inch(double val_in_ft) {
  constexpr double inch_in_ft = 12;
  return val_in_ft * inch_in_ft;
}

double ft_to_m(double val_in_ft) {
  return cm_to_m(inch_to_cm(ft_to_inch(val_in_ft)));
}