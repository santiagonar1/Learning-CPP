#include <iostream>
#include <string>
#include <vector>

constexpr int ERROR = -1;

int string_to_digit(const std::string spell_digit);

int main(int, char **) {
  std::string input = " ";

  std::cout << "Please write either either a digit in number or spelled\n";
  std::cout << "> ";
  std::cin >> input;

  int digit = string_to_digit(input);
  if (digit != ERROR) {
    std::cout << digit << '\n';
  }
}

int string_to_digit(const std::string spell_digit) {
  // NOLINTBEGIN(cppcoreguidelines-avoid-magic-numbers)
  if (spell_digit == "zero")
    return 0;
  else if (spell_digit == "one")
    return 1;
  else if (spell_digit == "two")
    return 2;
  else if (spell_digit == "three")
    return 3;
  else if (spell_digit == "four")
    return 4;
  else if (spell_digit == "five")
    return 5;
  else if (spell_digit == "six")
    return 6;
  else if (spell_digit == "seven")
    return 7;
  else if (spell_digit == "eight")
    return 8;
  else if (spell_digit == "nine")
    return 9;
  // NOLINTEND(cppcoreguidelines-avoid-magic-numbers)

  std::cout << "Digit " << spell_digit << " not recognized\n";
  return ERROR;
}