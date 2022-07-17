#include <iostream>

int main(int, char **) {
  int pennies{0}, nickels{0}, dimes{0}, quarters{0}, half_dollars{0};
  int dollar_coins{0};

  const int PENNY_TO_CENT = 1;
  const int NICKEL_TO_CENT = 5;
  const int DIME_TO_CENT = 10;
  const int QUARTER_TO_CENT = 25;
  const int HALF_DOLLAR_TO_CENT = 50;
  const int DOLLAR_DOLLAR_TO_CENT = 200;

  std::cout << "Indicate your money:\n";
  std::cout << "pennies > ";
  std::cin >> pennies;
  std::cout << "nickels > ";
  std::cin >> nickels;
  std::cout << "dimes > ";
  std::cin >> dimes;
  std::cout << "quarters > ";
  std::cin >> quarters;
  std::cout << "half dollars > ";
  std::cin >> half_dollars;
  std::cout << "dollar coins > ";
  std::cin >> dollar_coins;

  int cents = pennies * PENNY_TO_CENT + nickels * NICKEL_TO_CENT +
              dimes * DIME_TO_CENT + quarters * QUARTER_TO_CENT +
              half_dollars * HALF_DOLLAR_TO_CENT +
              dollar_coins * DOLLAR_DOLLAR_TO_CENT;

  std::cout << "\n****************************\n";
  std::cout << "You have " << pennies << " pennies\n";
  std::cout << "You have " << nickels << " nickels\n";
  std::cout << "You have " << dimes << " dimes\n";
  std::cout << "You have " << quarters << " quarters\n";
  std::cout << "You have " << half_dollars << " half dollars\n";
  std::cout << "You have " << dollar_coins << " dollar coins\n";
  std::cout << "The value of all your coins is " << cents << " cents.\n";
}
