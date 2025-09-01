#include <bits/stdc++.h>

unsigned int n, t;

int main() {
  std::cin >> n >> t;
  int list[n][2];

  for (size_t i = 0; i < n; i++)
    std::cin >> list[i][0] >> list[i][1];
  for (size_t i = 0; i < t; i++) {
    for (size_t i = 0; i < n; i++) {
      list[i][0] += list[i][1];
    }
  }
}
