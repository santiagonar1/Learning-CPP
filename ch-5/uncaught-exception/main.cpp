#include <iostream>
#include <string>

void error(std::string msg);

int main(int, char **) {
  error("Testing uncaught error");

  return 0;
}

void error(std::string msg) { throw std::runtime_error(msg); }
