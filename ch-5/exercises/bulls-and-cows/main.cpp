#include <algorithm>
#include <iostream>
#include <stdlib.h>
#include <string>
#include <time.h>
#include <vector>

class NoMoreDigits {};

int get_new_digit(const std::vector<int> existing_values);

int main(int, char **) {
  constexpr int num_values = 4;
  std::vector<int> values;

  /* initialize random seed: */
  srand(time(NULL));

  for (int i = 0; i < num_values; i++) {
    const int new_digit = get_new_digit(values);
    values.push_back(new_digit);
  }

  int num_bulls = 0;
  int num_cows = 0;
  int num_tries = 0;
  while (num_bulls != num_values) {
    std::string user_guess = " ";
    std::cout << "\nWhat is your guess?\n";
    std::cout << "> ";
    std::cin >> user_guess;

    if (user_guess.size() != num_values) {
      std::cout << "ERROR: Please indicate " << num_values << " digits\n";
      continue;
    }

    num_bulls = 0;
    num_cows = 0;
    for (int i = 0; i < num_values; i++) {
      // Explanation: a - '0' is equivalent to ((int)a) - ((int)'0'), which
      // means the ascii values of the characters are subtracted from each
      // other. Since 0 comes directly before 1 in the ascii table (and so on
      // until 9), the difference between the two gives the number that the
      // character a represents.
      const int guess = user_guess[i] - '0';

      if (values[i] == guess) {
        num_bulls++;
      } else if (std::find(values.begin(), values.end(), guess) !=
                 values.end()) {
        num_cows++;
      }
    }

    std::cout << num_bulls << " Bulls and " << num_cows << " Cows\n";
    num_tries++;
  }

  std::cout << "BRAVO!! It only took you " << num_tries << " tries\n";

  return 0;
}

int get_new_digit(const std::vector<int> existing_values) {
  constexpr int num_digits = 10;
  if (existing_values.size() == num_digits)
    throw NoMoreDigits{};

  int new_digit = rand() % num_digits;
  if (existing_values.empty())
    return new_digit;

  while (std::find(existing_values.begin(), existing_values.end(), new_digit) !=
         existing_values.end()) {
    new_digit = rand() % num_digits;
  }

  return new_digit;
}
