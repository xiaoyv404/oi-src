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
  int a, n;
  scanf("%d,%d", &a, &n);
  int count = 0, even = a;
  while (count < n) {
    if (even > 2 && even % 2 == 0) {
      int flag = 1;
      for (int m = 2; m <= even / 2 && flag; m++) {
        if (IsPrime(m) && IsPrime(even - m)) {
          printf("%d=%d+%d\n", even, m, even - m);
          flag = 0;
        }
      }
      count++;
    }
    even++;
  }
  return 0;
}
