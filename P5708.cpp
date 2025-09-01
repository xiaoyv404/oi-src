#include <bits/stdc++.h>

int main() {
  double a, b, c, p, s;

  std::cin >> a >> b >> c;
  p = (a + b + c) / 2.0;

  s = sqrt(p * (p - a) * (p - b) * (p - c));

  std::cout << std::setprecision(1) << std::fixed << s << std::endl;
}
