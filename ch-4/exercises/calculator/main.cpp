#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

constexpr int ERROR = -1;

int spelled_digit_to_digit(const std::string spell_digit);
int string_to_digit(const std::string str_digit);
int input_to_int(const std::string input);

int main(int, char **) {
  std::string input1 = " ";
  std::string input2 = " ";
  char operation = ' ';

  std::cout << "Please indicate the calculation in the format digit1 digit2 "
               "<operation>\n";
  std::cout << "> ";
  std::cin >> input1 >> input2 >> operation;

  const int val1 = input_to_int(input1);
  const int val2 = input_to_int(input2);

  if (val1 == ERROR) {
    std::cout << "ERROR: " << input1 << " is not a digit\n";
  } else if (val2 == ERROR) {
    std::cout << "ERROR: " << input2 << " is not a digit\n";
  } else {
    switch (operation) {
    case '+':
      std::cout << val1 << " + " << val2 << " = " << val1 + val2 << '\n';
      break;
    case '-':
      std::cout << val1 << " - " << val2 << " = " << val1 - val2 << '\n';
      break;
    case '*':
      std::cout << val1 << " * " << val2 << " = " << val1 * val2 << '\n';
      break;
    case '/':
      if (val2 != 0) {
        std::cout << val1 << " / " << val2 << " = " << val1 / val2 << '\n';
      } else {
        std::cout << "Division by 0 not allowed\n";
      }
      break;

    default:
      std::cout << "Operation " << operation << " not recognized\n";
      break;
    }
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

int input_to_int(const std::string input) {
  if (input.size() == 1) {
    return string_to_digit(input);
  } else {
    return spelled_digit_to_digit(input);
  }
}