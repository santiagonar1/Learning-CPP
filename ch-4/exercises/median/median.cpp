#include <algorithm>
#include <iostream>
#include <vector>

int main(int, char **) {
  std::vector<double> temps;

  std::cout << "> ";
  for (double temp = 0; std::cin >> temp;) {
    temps.push_back(temp);
  }

  std::sort(temps.begin(), temps.end());

  double sum = 0;
  for (double temp : temps) {
    sum += temp;
  }

  std::cout << "Mean: " << sum / temps.size() << '\n';

  if (temps.size() % 2 != 0) {
    std::cout << "Median: " << temps[temps.size() / 2] << '\n';
  } else if (!temps.empty()) {
    double median = (temps[temps.size() / 2] + temps[temps.size() / 2 - 1]) / 2;
    std::cout << "Median: " << median << '\n';
  }
}
