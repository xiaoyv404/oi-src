#include <iostream>

int main() {
  long long n;
  std::cin >> n;

  long long count = 0;
  if (n >= 8) {
    // Let a'=a-1, b'=b-1, c'=c-1, then a'+2b'+5c' = n-8 (all >= 0).
    long long m = n - 8;
    for (long long c = 0; c <= m / 5; ++c) {
      long long r = m - 5 * c;
      count += r / 2 + 1;
    }
  }

  std::cout << "count=" << count;
  return 0;
}
