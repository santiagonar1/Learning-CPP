#include <iostream>

void guess_number(const int lower_bound, const int upper_bound);

int main(int, char **) {
  constexpr int lower_boundary = 1;
  constexpr int upper_boundary = 100;

  std::cout << "Think of a number between " << lower_boundary << " and "
            << upper_boundary << '\n';

  guess_number(lower_boundary, upper_boundary);
}

void guess_number(const int lower_bound, const int upper_bound) {
  char input = ' ';
  if (lower_bound == upper_bound) {
    std::cout << "Your number is " << lower_bound << '\n';
  } else if (upper_bound - lower_bound == 1) {
    std::cout << "Is your number greater than " << lower_bound << "?\n";
    std::cout << "> ";
    std::cin >> input;
    if (input == 'y') {
      std::cout << "Your number is " << upper_bound << "\n";
    } else {
      std::cout << "Your number is " << lower_bound << "\n";
    }
  } else {
    const int middle_point = (lower_bound + upper_bound) / 2;
    std::cout << "Is your number greater than " << middle_point << "?\n";
    std::cout << "> ";
    std::cin >> input;
    if (input == 'y') {
      guess_number(middle_point + 1, upper_bound);
    } else {
      guess_number(lower_bound, middle_point);
    }
  }
}