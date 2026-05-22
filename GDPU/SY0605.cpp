#include <iomanip>
#include <iostream>

int main() {
  int n;
  std::cin >> n;
  if (n >= 10000) {
    double w = n / 10000.0;
    std::cout << std::fixed << std::setprecision(1) << w << "W";
  } else {
    std::cout << n;
  }
  return 0;
}
