#include <algorithm>
#include <iostream>
#include <vector>

// Finds the mode on a vector of sorted numbers
int get_mode(std::vector<int> numbers);

int main(int, char **) {
  int number = 0;
  std::vector<int> numbers;

  std::cout << "Please indicate the numbers\n";
  std::cout << "> ";

  while (std::cin >> number) {
    numbers.push_back(number);
  }

  if (numbers.empty()) {
    std::cout << "No numbers entered\n";
    return 0;
  }

  std::sort(numbers.begin(), numbers.end());

  const int mode = get_mode(numbers);
  std::cout << "Mode is " << mode << '\n';
}


int get_mode(std::vector<int> numbers) {
  int mode = numbers[0];
  int num_repetitions = 1;
  int max_num_repetitions = 1;
  for (int i = 1; i < numbers.size(); ++i) {
    if (numbers[i] == numbers[i - 1]) {
      ++num_repetitions;
      if (num_repetitions > max_num_repetitions) {
        mode = numbers[i];
        max_num_repetitions = num_repetitions;
      }
    } else {
      num_repetitions = 1;
    }
  }

  return mode;
}
