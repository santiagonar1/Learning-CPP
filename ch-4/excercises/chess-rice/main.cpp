#include <iostream>

int main(int, char **) {
  long int max_grains_rice = 0;
  std::cout << "Indicate upper limit grains of rice\n";
  std::cout << "> ";

  std::cin >> max_grains_rice;

  double total_grains_rice = 0;
  double grains_square = 1;
  int square_num = 0;

  while (total_grains_rice < max_grains_rice) {
    square_num++;
    total_grains_rice += grains_square;

    std::cout << "Square\t" << square_num << '\n';
    std::cout << "Grains square\t" << grains_square << '\n';
    std::cout << "Total grains\t" << total_grains_rice << '\n';
    std::cout << "**********************\n\n";

    grains_square *= 2;
  }

  int num_squares = 0;
  std::cout << "Indicate total number of squares\n";
  std::cout << "> ";
  std::cin >> num_squares;

  total_grains_rice = 0;
  grains_square = 1;
  for (int i = 0; i < num_squares; i++) {
    total_grains_rice += grains_square;

    std::cout << "Square\t" << i + 1 << '\n';
    std::cout << "Grains square\t" << grains_square << '\n';
    std::cout << "Total grains\t" << total_grains_rice << '\n';
    std::cout << "**********************\n\n";

    grains_square *= 2;
  }
}
