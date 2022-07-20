#include <iostream>
#include <string>
#include <vector>

int main(int, char **) {
  const std::string bleep = "Broccoli";
  std::vector<std::string> words;

  std::cout << "Please give your input\n";
  std::cout << "> ";
  for (std::string word; std::cin >> word;) {
    words.push_back(word);
  }

  for (std::string word : words) {
    if (word == bleep) {
      std::cout << "BLEEP ";
    } else {
      std::cout << word << " ";
    }
  }

  std::cout << '\n';
}
