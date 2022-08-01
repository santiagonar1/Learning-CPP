#include <iostream>
#include <vector>

int main(int, char **) {
  std::vector<double> temps;
  std::cout << "This is a buggy program. Please indicate the temperatures\n";
  std::cout << "> ";

  //NOLINTNEXTLINE(cppcoreguidelines-init-variables)
  for (double temp; std::cin >> temp;) {
    temps.push_back(temp);
  }

  double sum = 0;
  double max_temp = 0;
  double min_temp = 0;

  for (double temp: temps) {
      if (temp > max_temp) max_temp = temp;
      if (temp < min_temp) min_temp = temp;
      sum += temp;
  }

  std::cout << "Max. Temp: " << max_temp << '\n';
  std::cout << "Min. Temp: " << min_temp << '\n';
  std::cout << "Average Temp: " << sum / double(temps.size()) << '\n';
}
