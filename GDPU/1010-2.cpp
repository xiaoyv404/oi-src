#include <cstdio>
#include <iomanip>
#include <iostream>

int main() {
  int m, n;
  scanf("%d,%d", &m, &n);
  double res;
  for (int i = m; i <= n; i++) {
    res += i * i + (double)1 / i;
  }
  std::cout << std::fixed << std::setprecision(6) << res;
}
