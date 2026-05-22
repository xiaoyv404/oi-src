#include <iomanip>
#include <iostream>

int main() {
  float sum;

  for (int i = 0; i < 7; i++) {
    float a;
    std::cin >> a;
    sum += a - (int)a;
  }

  std::cout << "money=" << std::fixed << std::setprecision(2) << sum;
  return 0;
}