#include <iostream>

int area(int length, int width);

// This will NOT compile
int main(int, char **) {
  // int s1 = arena(7);
  // int s2 = area(7);
  int s3 = area("seven", 2);
}

int area(int length, int width) { return length * width; }
