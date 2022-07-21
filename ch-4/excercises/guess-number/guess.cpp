#include <iostream>

int main(int, char **) {
  constexpr int upper_boundary = 100;

  int lower_num = 1;
  int upper_num = upper_boundary;
  std::cout << "Think of a number between " << lower_num << " and " << upper_num
            << '\n';

  char input = ' ';

  while (upper_num - lower_num > 2) {
    const int middle_point = (lower_num + upper_num) / 2;
    char input = ' ';
    std::cout << "Is your number greater than " << middle_point << "?\n";
    std::cout << "> ";
    std::cin >> input;

    if (input == 'y') {
      lower_num = middle_point;
    } else {
      upper_num = middle_point;
    }
  }

  if (upper_num == lower_num) {
    std::cout << "Your number is " << upper_num << "\n";
  } else if (upper_num - lower_num == 1) {
    char input = ' ';
    std::cout << "Is your number greater than " << lower_num << "?\n";
    std::cout << "> ";
    std::cin >> input;
    if (input == 'y') {
      std::cout << "Your number is " << upper_num << "\n";
    } else {
      std::cout << "Your number is " << lower_num << "\n";
    }
  } else {
    char input = ' ';
    std::cout << "Is your number greater than " << (upper_num + lower_num) / 2
              << "?\n";
    std::cout << "> ";
    std::cin >> input;
    if (input == 'y') {
      std::cout << "Your number is " << upper_num << "\n";
    } else {
      std::cout << "Is your number greater than " << lower_num << "?\n";
      std::cout << "> ";
      std::cin >> input;
      if (input == 'y') {
        std::cout << "Your number is " << upper_num << "\n";
      } else {
        std::cout << "Your number is " << lower_num << "\n";
      }
    }
  }
}
