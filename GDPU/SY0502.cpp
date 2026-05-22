#include <cstdlib>
#include <math.h>
#include <stdio.h>

int IsPrime(int x) {
  if (x < 2)
    return 0;
  for (int i = 2; i <= sqrt(x); i++) {
    if (x % i == 0)
      return 0;
  }
  return 1;
}

int main() {
  int a, n, count = 0;
  char ch;
  scanf("%d,%d", &a, &n);
  int i = a;
  while (count < n) {
    if (IsPrime(i) && IsPrime(i + 2)) {
      printf("%d:%d\n", i, i + 2);
      count++;
    }
    i++;
  }
  return 0;
}
