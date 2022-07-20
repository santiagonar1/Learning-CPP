#include <iostream>

int main(int, char**) {
    std::cout << "> ";

    int val1 = 0;
    int val2 = 0;
    while (std::cin >> val1 >> val2) {
        std::cout << val1 << " " << val2 << '\n';
    }
}
