#include <bits/stdc++.h>

unsigned int size;
int c;
int main() {
  std::cin >> size;
  for (int i = size; i >= 0; i--) {
    std::cin >> c;

    if (c) {
      if (i != size && c > 0)
        std::cout << '+';
      if (c == -1) {
        std::cout << '-';
        if (i == 0)
          std::cout << '1';
      } else if (c != 1 || i == 0)
        std::cout << c;
      if (i > 1)
        std::cout << "x^" << i;
      if (i == 1)
        std::cout << 'x';
    }
  }
  return 0;
}
