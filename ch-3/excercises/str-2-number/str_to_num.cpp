#include <iostream>
#include <string>

int main(int, char **) {
  std::string spelling{" "};

  std::cout << "Spell a number between 0 and 4\n";
  std::cout << "> ";
  std::cin >> spelling;

  if (spelling == "zero") {
    std::cout << "0\n";
  } else if (spelling == "one") {
    std::cout << "1\n";
  } else if (spelling == "two") {
    std::cout << "2\n";
  } else if (spelling == "three") {
    std::cout << "3\n";
  } else if (spelling == "four") {
    std::cout << "4\n";
  } else {
    std::cout << "I do not know this number :-(\n";
  }
}
