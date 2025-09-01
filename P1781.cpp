#include <bits/stdc++.h>

uint n;

struct {
  uint a;
  std::string c;
} d[30];

int main() {
  std::ios::sync_with_stdio(false);

  std::cin >> n;

  for (size_t i = 0; i < n; i++) {
    d[i].a = i;
    std::cin >> d[i].c;
  }

  std::sort(d, d + n, [](const auto &x, const auto &y) {
    return x.c.size() != y.c.size() ? x.c.size() > y.c.size() : x.c > y.c;
  });

  std::cout << d[0].a + 1 << '\n' << d[0].c << '\n';

  return 0;
}
