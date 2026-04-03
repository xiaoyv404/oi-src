#include <iomanip>
#include <iostream>

int main() {
  double x;
  std::cin >> x;

  double y;
  if (x <= 100) {
    y = 0.51 * x;
  } else {
    y = 0.51 * 100 + 0.65 * (x - 100);
  }

  std::cout << std::fixed << std::setprecision(2) << y << '\n';
  return 0;
}