#include <iostream>

int area(int length, int width);

// This will NOT compile
int main(int, char **) {
//   int s1 = area(7;
//   int s2 = area(3)
//   Int s3 = area(7);
  int s4 = area('7);
}

int area(int length, int width) { return length * width; }
