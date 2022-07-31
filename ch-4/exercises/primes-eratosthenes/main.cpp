#include <iostream>
#include <vector>

int main(int, char **) {
  constexpr unsigned int first_prime = 2;
  unsigned int upper_bound = 0;

  std::cout << "Indicate up to which number you want to find primes:\n";
  std::cout << "> ";
  std::cin >> upper_bound;

  std::vector<unsigned int> primes;
  for (unsigned int i = first_prime; i < upper_bound; ++i) {
    primes.push_back(i);
  }

  unsigned int total_primes = 0;
  while(total_primes < primes.size() - 1) {
    std::vector<unsigned int> index_to_delete;
    for (unsigned int i = total_primes + 1; i < primes.size(); ++i) {
      if (primes[i] % primes[total_primes] == 0) {
        index_to_delete.push_back(i);
      }
    }

    for (int i = 0; i < index_to_delete.size(); ++i) {
      // primes is being modified, and index_to_delete is relative to
      // the unmodified version
      primes.erase(primes.begin() + index_to_delete[i] - i);
    }

    ++total_primes;
  }

  std::cout << "Found " << primes.size() << " primes between 0 and "
            << upper_bound << '\n';
  for (auto prime : primes) {
    std::cout << prime << "\n";
  }
}