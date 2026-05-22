#include <cstdio>
#include <iostream>
#include <ostream>

int main() {
  int a, b;
  std::scanf("[%d,%d]", &a, &b);
  int sum = 0;
  for (int i = a; i <= b; i++) {
    if (i % 4 == 0 && i % 100 != 0) {
      sum++;
    } else if (i % 400 == 0) {
      sum++;
    }
  }
  std::cout << "years=" << sum;
}