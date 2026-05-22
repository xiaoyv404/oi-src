#include <cstdio>
#include <iostream>

int main() {
  long long a, n;
  std::scanf("%lld,%lld", &a, &n);
  long long sum = 0, t = 0;
  for (long long i = 1; i <= n; i++) {
    t = t * 10 + a;
    sum += t;
  }
  std::cout << "s=" << sum;
  return 0;
}