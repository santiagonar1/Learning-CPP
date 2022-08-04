#include <iostream>
#include <numeric>
#include <string>
#include <vector>

int main(int, char **) {
  std::vector<int> values;

  int num_values = 0;
  std::cout << "Please indicate the number of values you want to sum:\n";
  std::cout << "> ";
  std::cin >> num_values;

  std::string input = " ";
  std::cout << "Please indicate the values (press '|` to stop):\n";
  std::cout << "> ";
  std::cin >> input;

  while (input != "|") {
    try {
      const int value = std::stoi(input);
      values.push_back(value);
      std::cin >> input;
    } catch (std::invalid_argument) {
      std::cerr << "ERROR: " << input << " Not a number\n";
      input = "|";
    }
  }

  if (values.size() < num_values) {
    std::cerr << "ERROR: Not enough values on the vector\n";
    return 1;
  }

  const int sum =
      std::accumulate(values.begin(), values.begin() + num_values, 0);

  std::cout << "Result: " << sum << '\n';
}
