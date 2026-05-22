#include <iostream>

int main() {
  int n;
  if (!(std::cin >> n)) {
    return 0;
  }

  if (n <= 0 || n > 51 || n % 2 == 0) {
    std::cout << "Input error";
    return 0;
  }

  int mid = (n + 1) / 2;
  for (int i = 1; i <= n; ++i) {
    int m = (i > mid) ? (n - i + 1) : i;

    for (int s = 0; s < 30 - m; ++s) {
      std::cout << ' ';
    }

    char ch = static_cast<char>('A' + m - 1);
    for (int j = 0; j < 2 * m - 1; ++j) {
      std::cout << ch;
    }

    std::cout << '\n';
  }

  return 0;
}
