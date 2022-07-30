#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

// Finds the mode on a vector of sorted strings
std::string get_mode(std::vector<std::string> words);

int main(int, char **) {
  std::string word = " ";
  std::vector<std::string> words;

  std::cout << "Please indicate the words\n";
  std::cout << "> ";

  while (std::cin >> word) {
    words.push_back(word);
  }

  if (words.empty()) {
    std::cout << "No words entered\n";
    return 0;
  }

  std::sort(words.begin(), words.end());

  const std::string mode = get_mode(words);
  std::cout << "Mode is " << mode << '\n';
  std::cout << "Min is " << words[0] << '\n';
  std::cout << "Max is " << words[words.size() - 1] << '\n';
}

std::string get_mode(std::vector<std::string> words) {
  std::string mode = words[0];
  int num_repetitions = 1;
  int max_num_repetitions = 1;
  for (int i = 1; i < words.size(); ++i) {
    if (words[i] == words[i - 1]) {
      ++num_repetitions;
      if (num_repetitions > max_num_repetitions) {
        mode = words[i];
        max_num_repetitions = num_repetitions;
      }
    } else {
      num_repetitions = 1;
    }
  }

  return mode;
}
