#include <iostream>
#include <string>

int main(int, char **) {
  std::string first_name;
  std::string friend_name;
  char friend_sex{' '};
  int age{0};

  std::cout << "Enter the name of the person you want to write to\n";
  std::cout << "> ";
  std::cin >> first_name;
  std::cout << "Enter the his/her age\n";
  std::cout << "> ";
  std::cin >> age;

  const int TOO_OLD = 110;
  while (age <= 0 || age >= TOO_OLD) {
    std::cout << "You are kidding! Try again\n";
    std::cout << "> ";
    std::cin >> age;
  }

  std::cout << "Enter the name of a friend\n";
  std::cout << "> ";
  std::cin >> friend_name;
  std::cout << "Enter an 'm' if your friend is male, 'f' otherwise\n";
  std::cout << "> ";
  std::cin >> friend_sex;

  while (friend_sex != 'm' && friend_sex != 'f') {
    std::cout << "Wrong input\n";
    std::cout << "> ";
    std::cin >> friend_sex;
  }

  std::cout << "Dear " << first_name << ",\n";
  std::cout << "How are you? I am doing fine. I miss you." << '\n';
  std::cout << "How is your family doing? I cannot believe it has" << '\n';
  std::cout << "been this long." << '\n';
  std::cout << "Have you seen " << friend_name << " lately?\n";

  if (friend_sex == 'm') {
    std::cout << "If you see " << friend_name << " please ask him to call me\n";
  } else {
    std::cout << "If you see " << friend_name << " please ask her to call me\n";
  }

  std::cout << "I hear you just had a birthday and you are " << age
            << " years old!\n";

  // NOLINTBEGIN(*-avoid-magic-numbers): Numbers just taken from the book.
  if (age < 12) {
    std::cout << "Next year you will be " << age + 1 << " years old.\n";
  } else if (age == 17) {
    std::cout << "Next year you will be able to vote.\n";
  } else if (age > 70) {
    std::cout << "I hope you are enjoying retirement!\n";
  }
  // NOLINTEND(*-avoid-magic-numbers)

  std::cout << "Yours sincerely,\n\nSantiago\n";

  return 0;
}
