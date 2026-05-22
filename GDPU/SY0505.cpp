#include <stdio.h>

int length(int x) {
  int len = 0;
  do {
    len++;
    x /= 10;
  } while (x > 0);
  return len;
}

int mypow(int a, int n) {
  int res = 1;
  for (int i = 0; i < n; i++) {
    res *= a;
  }
  return res;
}

int sum(int a, int n) {
  int s = 0;
  while (a > 0) {
    int g = a % 10;
    s += mypow(g, n);
    a /= 10;
  }
  return s;
}

int Daffodil(int n) {
  int len = length(n);
  return sum(n, len) == n;
}

int main() {
  int low, high;
  scanf("%d,%d", &low, &high);
  for (int i = low; i <= high; i++) {
    if (Daffodil(i)) {
      printf("%d\n", i);
    }
  }
  return 0;
}
