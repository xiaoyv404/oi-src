#include <bits/stdc++.h>

unsigned int size, x, y;

int num = -1;

int main() {
  std::cin >> size;
  int matrix[size][4];

  for (size_t i = 0; i < size; i++) {
    for (size_t j = 0; j < 4; j++) {
      std::cin >> matrix[i][j];
    }
  }

  std::cin >> x >> y;

  for (size_t i = 0; i < size; i++) {
    unsigned int xN = matrix[i][0];
    unsigned int yN = matrix[i][1];
    unsigned int xMax = xN + matrix[i][2];
    unsigned int yMax = yN + matrix[i][3];
    if ((xN <= x && x <= xMax) && (yN <= y && y <= yMax)) {
      num = i + 1;
    }
  }

  std::cout << num << std::endl;
  return 0;
}
