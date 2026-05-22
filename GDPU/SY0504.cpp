#include <math.h>
#include <stdio.h>

int isAutomorphic(int x) {
  int sq = x * x;
  int t = x;
  while (t > 0) {
    if (sq % 10 != t % 10)
      return 0;
    sq /= 10;
    t /= 10;
  }
  return 1;
}

int main() {
  int a, n;
  scanf("%d,%d", &a, &n);
  int count = 0, num = a;
  while (count < n) {
    if (isAutomorphic(num)) {
      printf("%d\n", num);
      count++;
    }
    num++;
  }
  return 0;
}
