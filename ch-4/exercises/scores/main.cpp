#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

bool repeated_names(std::vector<std::string> names);

// Get index of name. If name is not in the vector, it
// returns -1
long get_index_name(const std::vector<std::string> names,
                    const std::string name);

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

  const long index_name = get_index_name(names, search_name);
  if (index_name == -1) {
    std::cout << "Name " << search_name << " not found\n";
  } else {
    std::cout << "[" << index_name + 1 << "] " << names[index_name] << " "
              << scores[index_name] << '\n';
  }
}

bool repeated_names(std::vector<std::string> names) {
  std::sort(names.begin(), names.end());
  auto iter = std::adjacent_find(names.begin(), names.end());

  return iter == names.end() ? false : true;
}

long get_index_name(const std::vector<std::string> names,
                    const std::string name) {
  auto it = std::find(names.begin(), names.end(), name);

  if (it != names.end()) {
    return it - names.begin();
  } else {
    return -1;
  }
}
