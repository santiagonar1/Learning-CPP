#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main(int, char **) {
  const std::vector<std::string> bleeps = {"Broccoli", "Meat"};
  std::vector<std::string> words;

  std::cout << "Please give your input\n";
  std::cout << "> ";
  for (std::string word; std::cin >> word;) {
    words.push_back(word);
  }

  for (std::string word : words) {
    if (std::find(bleeps.begin(), bleeps.end(), word) != bleeps.end()) {
      std::cout << "BLEEP ";
    } else {
      std::cout << word << " ";
    }
  }

  std::cout << '\n';
}
