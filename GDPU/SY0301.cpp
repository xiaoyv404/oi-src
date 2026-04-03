#include <iomanip>
#include <iostream>

int main() {
  float x, res;
  std::cin >> x;
  if (x < 1) {
    res = x;
  } else if (1 <= x && x < 10) {
    res = x - 1;
  } else if (x >= 10) {
    res = 3 * x - 11;
  }
  std::cout << "y=" << std::fixed << std::setprecision(2) << res << '\n';
  return 0;
}