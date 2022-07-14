#include <iostream>

#include <string>

int main(int, char**) {
  std::string name;
  double age;

  std::cout << "Please enter your name and your age:\n";
  std::cin >> name >> age;
  std::cout << "Hi " << name << "! Your age in months is " << age * 12 << "\n";
}
