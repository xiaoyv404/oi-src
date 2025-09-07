#include <cstddef>
#include <iostream>
int main() {
  int H, W;
  std::cin >> H >> W;
  bool grid[H][W];
  for (size_t h = 0; h < H; h++) {
    for (size_t w = 0; w < W; w++) {
      char c;
      std::cin >> c;
      if (c == '#') {
        grid[h][w] = 1;
      } else {
        grid[h][w] = 0;
      }
    }
  }
  for (size_t h = 0; h < H; h++) {
    for (size_t w = 0; w < W; w++) {
      int count = 0;
      if (grid[h][w]) {
        if (h > 0)
          count += grid[h - 1][w];
        if (h < H - 1)
          count += grid[h + 1][w];
        if (w > 0)
          count += grid[h][w - 1];
        if (w < W - 1)
          count += grid[h][w + 1];
        if (count % 2 != 0 || count == 0) {
          std::cout << "No";
          return 0;
        }
      }
    }
  }
  std::cout << "Yes";
  return 0;
}
