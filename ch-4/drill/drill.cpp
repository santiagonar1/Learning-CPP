#include <cmath>
#include <iostream>
#include <limits>

int main(int, char **) {
  double val = 0;
  double smallest = std::numeric_limits<double>::max();
  double largest = std::numeric_limits<double>::min();

  std::cout << "> ";
  while (std::cin >> val) {
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
