#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

bool repeated_names(std::vector<std::string> names);

int main(int, char **) {
  const std::string termination_name = "NoName";
  std::string name = " ";
  int score = 0;
  std::vector<std::string> names;
  std::vector<int> scores;

  std::cout << "Please indicate your pairs [Name] [Score]\n"
            << "Terminate with " << termination_name << " 0\n";

  std::cout << "> ";
  std::cin >> name >> score;
  while (name != termination_name) {
    names.push_back(name);
    scores.push_back(score);
    std::cout << "> ";
    std::cin >> name >> score;
  }

  if (repeated_names(names)) {
    std::cout << "ERROR: Repeated names\n";
    return -1;
  }

  std::cout << "\n******************\n";
  for (int i = 0; i < names.size(); ++i) {
    std::cout << "[" << i + 1 << "] " << names[i] << " " << scores[i] << '\n';
  }

  std::cout << "\n\n";
  std::string search_name = " ";
  std::cout << "Indicate the searching name\n";
  std::cout << "> ";
  std::cin >> search_name;
}

bool repeated_names(std::vector<std::string> names) {
  std::sort(names.begin(), names.end());
  auto iter = std::adjacent_find(names.begin(), names.end());

  return iter == names.end() ? false : true;
}