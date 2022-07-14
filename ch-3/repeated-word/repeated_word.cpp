#include <iostream>
#include <string>

int main(int, char **) {
  std::string current;
  std::string previous = " ";

  while (std::cin >> current) {
    if (previous == current) {
      std::cout << "Repeated word: " << current << '\n';
    }
    previous = current;
  }
}
