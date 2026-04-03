#include <algorithm>
#include <iostream>

int main() {
  int x, y, z;
  std::cin >> x >> y >> z;

  int a[3] = {x, y, z};
  std::sort(a, a + 3);

  std::cout << "small to big: " << a[0] << ' ' << a[1] << ' ' << a[2] << '\n';
  return 0;
}
