#include <iostream>

int main(int, char **) {
  double miles{0.0};
  const int km_in_mile = 1609;

  std::cout << "Please give the number of miles: \n";
  std::cout << "> ";

  std::cin >> miles;
  std::cout << "That would be " << miles * km_in_mile << " km\n";
}
