#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

int main(int, char **) {
  std::vector<double> distances;

  std::cout << "Please indicate the distances between the cities: \n";
  std::cout << "> ";

  for (double d = 0; std::cin >> d;) {
    distances.push_back(d);
  }

  if (!distances.empty()) {
    std::sort(distances.begin(), distances.end());
    std::cout << "Shortest distance: " << distances[0] << "\n";
    std::cout << "Longest distance: " << distances[distances.size() - 1]
              << "\n";

    const double sum = std::accumulate(distances.begin(), distances.end(),
                                       decltype(distances)::value_type(0));
    std::cout << "Mean: " << sum / (double)distances.size() << '\n';
  }
}
