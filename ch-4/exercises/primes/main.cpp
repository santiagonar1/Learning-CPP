#include <iostream>
#include <vector>

bool is_prime(const unsigned int number,
              const std::vector<unsigned int> primes);

int main(int, char **) {
  unsigned int upper_bound = 0;
  constexpr unsigned int first_prime = 2;

  std::cout << "Indicate up to which number you want to find primes:\n";
  std::cout << "> ";
  std::cin >> upper_bound;

  std::vector<unsigned int> primes = {first_prime};
  for (unsigned int i = first_prime + 1; i < upper_bound; ++i) {
    if (is_prime(i, primes))
      primes.push_back(i);
  }

  std::cout << "Found " << primes.size() << " primes between 0 and "
            << upper_bound << '\n';
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