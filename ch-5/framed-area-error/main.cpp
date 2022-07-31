#include <iostream>

int area(int length, int width);
int framed_area(int x, int y);

int main(int, char **) {

  const int x = 1;
  const int y = 1;
  const int z = 1;
  int area1 = area(x, y);
  if (area1 <= 0) {
    std::cout << "Error area1\n";
    return -1;
  }

  int area2 = framed_area(1, z);
  if (area2 <= 0) {
    std::cout << "Error area2\n";
    return -1;
  }

  int area3 = framed_area(y, z);
  if (area3 <= 0) {
    std::cout << "Error area3\n";
    return -1;
  }

  double ratio = double(area1) / area3;
}

int area(int length, int width) {
  if (length <= 0 || width <= 0)
    return -1;
  return length * width;
}

int framed_area(int x, int y) {
  constexpr int frame_width = 2;
  return area(x - frame_width, y - frame_width);
}
