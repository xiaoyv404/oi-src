#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int num;
  int min, max;
  for (int i = 0; i < n; i++) {
    std::cin >> num;
    if (i == 0) {
      min = max = num;
    } else {
      if (num > max)
        max = num;
      if (num < min)
        min = num;
    }
  }
  std::cout << "Range=" << (max - min);
}