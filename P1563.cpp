#include <bits/stdc++.h>

unsigned int n, m, a, s, f;
int point = 0;
std::string name;

int main() {
  std::cin >> n >> m;

  unsigned int face[n];
  std::string names[n];

  for (size_t i = 0; i < n; i++) {
    std::cin >> f >> name;
    names[i] = name;
    face[i] = f;
  }
  for (size_t i = 1; i <= m; i++) {
    std::cin >> a >> s;

    if (face[point] == 0 && a == 0)
      point = (point + n - s) % n;
    else if (face[point] == 0 && a == 1)
      point = (point + s) % n;
    else if (face[point] == 1 && a == 0)
      point = (point + s) % n;
    else if (face[point] == 1 && a == 1)
      point = (point + n - s) % n;
  }

  std::cout << names[point] << std::endl;

  return 0;
}
