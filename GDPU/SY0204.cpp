#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
  double x0, y0;
  double A, B, C;

  std::cin >> x0 >> y0;
  std::cin >> A >> B >> C;

  double d = std::fabs(A * x0 + B * y0 + C) / std::sqrt(A * A + B * B);
  std::cout << std::fixed << std::setprecision(6) << d << '\n';

  return 0;
}
