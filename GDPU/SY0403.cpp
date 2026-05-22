#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
  double x;
  std::cin >> x;

  double s = 0.0, a = 1.0, b = 1.0;
  int i = 1;
  while (std::fabs(b / a) >= 0.00001) {
    s = s + b / a;
    a = a * i;
    b = b * x;
    i++;
  }

  std::cout << "s=" << std::fixed << std::setprecision(4) << s;
  return 0;
}
