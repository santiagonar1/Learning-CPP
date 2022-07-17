#include <iostream>
#include <string>

int main(int, char **) {
  std::string val1{0}, val2{0}, val3{0};
  std::string first{0}, second{0}, third{0};

  std::cout << "Give 3 strings in any order: \n";
  std::cout << "> ";
  std::cin >> val1 >> val2 >> val3;

  if (val1 < val2) {
    if (val1 < val3) {
      first = val1;
      if (val2 < val3) {
        second = val2;
        third = val3;
      } else {
        second = val3;
        third = val2;
      }
    } else {
      first = val3;
      second = val1;
      third = val2;
    }
  } else if (val2 < val3) {
    first = val2;
    if (val1 < val3) {
      second = val1;
      third = val3;
    } else {
      second = val3;
      third = val1;
    }
  } else {
    first = val3;
    second = val2;
    third = val1;
  }

  std::cout << first << ", " << second << ", " << third << "\n";
}
