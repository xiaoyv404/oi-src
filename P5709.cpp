#include <bits/stdc++.h>

int main() {
  unsigned int m, t, s, allTime;
  std::cin >> m >> t >> s;

  allTime = m * t;
  if (t == 0 || allTime <= s) {
    std::cout << 0 << std::endl;
    return 0;
  }

  std::cout << (int)((allTime - s) / t) << std::endl;
}
