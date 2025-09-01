#include <bits/stdc++.h>

uint n, max = 0, total = 0;
std::string maxn;

int main() {
  std::ios::sync_with_stdio(false);

  std::cin >> n;

  for (size_t i = 0; i < n; i++) {
    uint score1, score2, sum = 0, x;
    char a, b;
    std::string name;

    std::cin >> name >> score1 >> score2 >> a >> b >> x;
    if (score1 > 80 && x > 0)
      sum += 8000;
    if (score1 > 85 && score2 > 80)
      sum += 4000;
    if (score1 > 90)
      sum += 2000;
    if (score1 > 85 && b == 'Y')
      sum += 1000;
    if (score2 > 80 && a == 'Y')
      sum += 850;
    total += sum;
    if (sum > max)
      maxn = name, max = sum;
  }
  std::cout << maxn << '\n' << max << '\n' << total;

  return 0;
}
