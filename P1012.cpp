#include <bits/stdc++.h>

std::string s[25];
uint n;

int main() {
  std::ios::sync_with_stdio(false);

  std::cin >> n;

  for (size_t i = 0; i < n; i++)
    std::cin >> s[i];

  std::sort(s, s + n, [](const std::string &x, const std::string &y) {
    return x + y > y + x;
  });

  for (size_t i = 0; i < n; i++)
    std::cout << s[i];

  return 0;
}
