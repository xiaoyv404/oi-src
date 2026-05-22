#include <iostream>

int sum(int a, int b) {
  int s = 0;
  for (int i = a; i < a + b; i++) {
    s += i;
  }
  return s;
}

int main() {
  int c;
  std::cin >> c;
  int s = 0;
  for (int i = 1; i <= c; i++) {
    s += sum(i, i + 1);
  }
  std::cout << "sum=" << s;
}