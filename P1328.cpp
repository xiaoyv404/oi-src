#include <bits/stdc++.h>

unsigned int vs[5][5] = {{0, 0, 1, 1, 0},
                         {1, 0, 0, 1, 0},
                         {0, 1, 0, 0, 1},
                         {0, 0, 1, 0, 1},
                         {1, 1, 0, 0, 0}},
             n, na, nb, va, vb;

int main() {
  std::cin >> n >> na >> nb;
  unsigned int a[na], b[nb];
  for (size_t i = 0; i < na; i++)
    std::cin >> a[i];
  for (size_t i = 0; i < nb; i++)
    std::cin >> b[i];
  for (size_t i = 0; i < n; i++) {
    va += vs[a[i % na]][b[i % nb]];
    vb += vs[b[i % nb]][a[i % na]];
  }

  std::cout << va << ' ' << vb << std::endl;
  return 0;
}
