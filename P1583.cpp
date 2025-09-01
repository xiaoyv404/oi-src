#include <bits/stdc++.h>

uint n, k, E[10];

struct {
  uint w;
  uint num;
  uint d;
} p[20005];

int main() {
  std::ios::sync_with_stdio(false);

  std::cin >> n >> k;

  for (size_t i = 0; i < 10; i++)
    std::cin >> E[i];

  for (size_t i = 0; i < n; i++) {
    std::cin >> p[i].w;
    p[i].num = i + 1;
  }

  std::sort(p, p + n, [](const auto &x, const auto &y) {
    return x.w != y.w ? x.w > y.w : x.num < y.num;
  });

  for (size_t i = 0; i < n; i++) {
    p[i].d = i % 10;
    p[i].w += E[p[i].d];
  }

  std::sort(p, p + n, [](const auto &x, const auto &y) {
    return x.w != y.w ? x.w > y.w : x.num < y.num;
  });

  for (size_t i = 0; i < k; i++)
    std::cout << p[i].num << " ";

  return 0;
}
