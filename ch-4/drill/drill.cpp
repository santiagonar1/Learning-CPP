#include <cmath>
#include <string>
#include <iostream>
#include <limits>

int main(int, char **) {
  double val = 0;
  std::string unit = "";
  double smallest = std::numeric_limits<double>::max();
  double largest = std::numeric_limits<double>::min();

  std::cout << "> ";
  while (std::cin >> val >> unit) {
    if (val < smallest) {
        std::cout << "The smallest so far: " << val << '\n';
        smallest = val;
    }
    
    if (largest < val) {
        std::cout << "The largest so far: " << val << '\n';
        largest = val;
    }
  }
}
