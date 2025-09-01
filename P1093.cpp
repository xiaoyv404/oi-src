#include <bits/stdc++.h>

uint n;

struct {
  uint n;
  uint c;
  uint m;
  uint e;
  uint t;
} s[305];

int main() {
  std::ios::sync_with_stdio(false);

  std::cin >> n;
  for (size_t i = 0; i < n; i++) {
    std::cin >> s[i].c >> s[i].m >> s[i].e;
    s[i].n = i + 1;
    s[i].t = s[i].c + s[i].m + s[i].e;
  }

  std::sort(s, s + n, [](const auto &x, const auto &y) {
    return x.t != y.t ? x.t > y.t : (x.c != y.c ? x.c > y.c : x.n < y.n);
  });

  for (size_t i = 0; i < 5; i++)
    std::cout << s[i].n << ' ' << s[i].t << '\n';

  return 0;
}
