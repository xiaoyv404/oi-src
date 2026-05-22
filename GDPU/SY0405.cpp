#include <iomanip>
#include <iostream>

int main() {
  int n;
  std::cin >> n;

  double sum = 0.0;
  double a = 1.0, b = 2.0;

  for (int i = 0; i < n; ++i) {
    sum += b / a;
    double t = b;
    b = a + b;
    a = t;
  }

  std::cout << "s=" << std::fixed << std::setprecision(2) << sum;
  return 0;
}
