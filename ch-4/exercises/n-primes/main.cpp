#include <iostream>
#include <vector>

bool is_prime(const unsigned int number,
              const std::vector<unsigned int> primes);

int main(int, char **) {
  unsigned int num_primes = 0;
  constexpr unsigned int first_prime = 2;

  std::cout << "Indicate how many primes you want to find:\n";
  std::cout << "> ";
  std::cin >> num_primes;

  std::vector<unsigned int> primes = {first_prime};
  for (unsigned int i = first_prime + 1; primes.size() < num_primes; ++i) {
    if (is_prime(i, primes))
      primes.push_back(i);
  }

  std::cout << "Primes found: \n";
  for (auto prime : primes) {
    std::cout << prime << "\n";
  }
}

bool is_prime(const unsigned int number,
              const std::vector<unsigned int> primes) {
  for (int i = 0; i < primes.size() && primes[i] < number; ++i) {
    if (number % primes[i] == 0)
      return false;
  }

  return true;
}