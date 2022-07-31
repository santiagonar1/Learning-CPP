#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

constexpr int ERROR = -1;

int spelled_digit_to_digit(const std::string spell_digit);
std::string digit_to_string(const int digit);
int string_to_digit(const std::string str_digit);

int main(int, char **) {
  std::string input = " ";

  std::cout << "Please write either either a digit in number or spelled\n";
  std::cout << "> ";
  std::cin >> input;
  while (input != "q") {

    if (input.size() == 1) {
        const int digit = string_to_digit(input);
        if (digit != ERROR) {
            std::cout << digit_to_string(digit) << '\n';
        } else {
            std::cout << "Digit " << input << " not recognized\n";
        }
    } else {
      const int digit = spelled_digit_to_digit(input);
      if (digit != ERROR)
        std::cout << digit << '\n';
    }
    std::cout << "> ";
    std::cin >> input;
  }
}

int spelled_digit_to_digit(const std::string spell_digit) {
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

std::string digit_to_string(const int digit) {
  const std::vector<std::string> spelled_numbers = {
      "zero", "one", "two",   "three", "four",
      "five", "six", "seven", "eight", "nine"};

  if (digit >= 0 && digit < spelled_numbers.size()) {
    return spelled_numbers[digit];
  } else {
    return " ";
  }
}

int string_to_digit(const std::string str_digit) {
  const std::vector<std::string> valid_digits = {"0", "1", "2", "3", "4",
                                                 "5", "6", "7", "8", "9"};
  auto it = std::find(valid_digits.begin(), valid_digits.end(), str_digit);

  if (it != valid_digits.end()) {
      return int(it - valid_digits.begin());
  } else {
      return ERROR;
  }
}