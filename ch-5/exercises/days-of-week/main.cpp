#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

bool string_in(const std::vector<std::string> strings, const std::string str);

int main(int, char **) {
  const std::vector<std::string> monday_names = {"mon", "monday"};
  const std::vector<std::string> tuesday_names = {"tue", "tuesday"};
  const std::vector<std::string> wednesday_names = {"wed", "wednesday"};
  const std::vector<std::string> thursday_names = {"thu", "thursday"};
  const std::vector<std::string> friday_names = {"fri", "friday"};
  const std::vector<std::string> saturday_names = {"sat", "saturday"};
  const std::vector<std::string> sunday_names = {"sun", "sunday"};

  constexpr int num_days = 7;
  constexpr int mon = 0;
  constexpr int tue = 1;
  constexpr int wed = 2;
  constexpr int thu = 3;
  constexpr int fri = 4;
  constexpr int sat = 5;
  constexpr int sun = 6;

  std::vector<int> value_days(num_days);
  int num_rejected = 0;
  std::string day = " ";
  int value = 0;

  std::cout << "Please indicate the values in the form <day> <value>\n";
  std::cout << "> ";

  while (std::cin >> day >> value) {
    std::for_each(day.begin(), day.end(),
                  [](char &c) { c = char(::tolower(c)); });
    if (string_in(monday_names, day)) {
      value_days[mon]++;
    } else if (string_in(tuesday_names, day)) {
      value_days[tue]++;
    } else if (string_in(wednesday_names, day)) {
      value_days[wed]++;
    } else if (string_in(thursday_names, day)) {
      value_days[thu]++;
    } else if (string_in(friday_names, day)) {
      value_days[fri]++;
    } else if (string_in(saturday_names, day)) {
      value_days[sat]++;
    } else if (string_in(sunday_names, day)) {
      value_days[sun]++;
    } else {
      num_rejected++;
    }
  }

  std::cout << "MON:\t" << value_days[mon] << '\n';
  std::cout << "TUE:\t" << value_days[tue] << '\n';
  std::cout << "WED:\t" << value_days[wed] << '\n';
  std::cout << "THU:\t" << value_days[thu] << '\n';
  std::cout << "FRI:\t" << value_days[fri] << '\n';
  std::cout << "SAT:\t" << value_days[sat] << '\n';
  std::cout << "SUN:\t" << value_days[sun] << '\n';
  std::cout << "Rejected:\t" << num_rejected << '\n';
}

bool string_in(const std::vector<std::string> strings, const std::string str) {
  auto it = std::find(strings.begin(), strings.end(), str);
  return it != strings.end();
}
