#include <bits/stdc++.h>

bool a[105][105];
uint n, m;

int main() {
  std::ios::sync_with_stdio(false);

  std::cin >> n >> m;

  for (size_t i = 1; i <= n; i++)
    for (size_t j = 1; j <= m; j++) {
      char tmp;
      std::cin >> tmp;
      if (tmp == '*')
        a[i][j] = 1;
    }

  for (size_t i = 1; i <= n; i++) {
    for (size_t j = 1; j <= m; j++) {
      if (a[i][j] == 1)
        std::cout << '*';
      else
        std::cout << a[i + 1][j + 1] + a[i + 1][j - 1] + a[i + 1][j] +
                         a[i][j + 1] + a[i][j - 1] + a[i - 1][j + 1] +
                         a[i - 1][j] + a[i - 1][j - 1];
    }
    std::cout << '\n';
  }

  return 0;
}
