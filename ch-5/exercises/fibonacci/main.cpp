#include <iostream>
#include <stdexcept>
#include <vector>

std::vector<int> fibonacci(const int num_values);

int main(int, char **) {
  int num_values = 0;

  std::cout << "How many elements of the series you want to calculate?\n";
  std::cout << "> ";
  std::cin >> num_values;

  auto values = fibonacci(num_values);

  std::cout << "Found:\n";
  for (auto v : values) {
    std::cout << v << "\t";
  }
  std::cout << '\n';

  std::cout << "Finding max Fib. that fits a string\n";

  int second_to_last = 1;
  int last = 1;
  int next = second_to_last + last;

  while (next > 0) {
    second_to_last = last;
    last = next;
    next = second_to_last + last;
  }

  std::cout << "Biggest Fib. that fits an integer: " << last << '\n';
}

std::vector<int> fibonacci(const int num_values) {
  std::vector<int> values = {1, 1};
  for (int i = 2; i < num_values; i++) {
    const int next_value = values[i - 2] + values[i - 1];
    if (next_value < 0)
      throw std::overflow_error("Cannot go beyond\n");
    values.push_back(next_value);
  }

  return values;
}
