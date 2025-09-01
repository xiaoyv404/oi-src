#include <bits/stdc++.h>

unsigned int n, sum = 0, setp = 0;

int main() {
  std::cin >> n;
  int list[n];

  for (size_t i = 0; i < n; i++) {
    std::cin >> list[i];
    sum += list[i];
  }
  sum /= n;
  for (size_t i = 0; i < n; i++) {
    if (list[i] != sum) {
      list[i + 1] -= sum - list[i];
      setp++;
    }
  }

  std::cout << setp << '\n';
}
