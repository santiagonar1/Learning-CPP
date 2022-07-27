#include <iostream>
#include <vector>

int main(int, char **) {

  std::vector<char> machine_selections = {'r', 'p', 's'};

  while (!machine_selections.empty()) {
    std::cout << machine_selections.size() << " Games left\n";
    char input = ' ';
    std::cout << "Please indicate (r)ock, (p)aper, or (s)cissors\n";
    std::cout << "> ";
    std::cin >> input;
    const char machine_selection = machine_selections.back();
    std::cout << "Machine selected: " << machine_selection << "\n";
    switch (input) {
    case 'r':
      if (machine_selection == 'r')
        std::cout << "You draw!\n";
      else if (machine_selection == 'p')
        std::cout << "You lose\n";
      else if (machine_selection == 's')
        std::cout << "You win\n";
      break;

    case 'p':
      if (machine_selection == 'r')
        std::cout << "You win!\n";
      else if (machine_selection == 'p')
        std::cout << "You draw\n";
      else if (machine_selection == 's')
        std::cout << "You lose\n";
      break;

    case 's':
      if (machine_selection == 'r')
        std::cout << "You lose!\n";
      else if (machine_selection == 'p')
        std::cout << "You win\n";
      else if (machine_selection == 's')
        std::cout << "You draw\n";
      break;

    default:
      std::cout << input << " is not a valid command\n";
      break;
    }

    machine_selections.pop_back();
  }
}
