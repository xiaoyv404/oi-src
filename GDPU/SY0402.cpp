#include <iostream>

int main() {
  long long a, b;
  std::scanf("%lld,%lld", &a, &b);

  long long x = a, y = b;
  while (y != 0) {
    long long r = x % y;
    x = y;
    y = r;
  }

  long long gcd = x;
  long long lcm = a / gcd * b;

  std::cout << "gys=" << gcd << ",gbs=" << lcm;
  return 0;
}