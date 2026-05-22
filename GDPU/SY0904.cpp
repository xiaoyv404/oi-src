#include <math.h>
#include <stdio.h>
#define N 100000
int Prime(long n) {
  int i, m, flag;
  m = sqrt(n) + 1;
  flag = n > 1 ? 1 : 0;
  for (i = 2; i < m && flag; i++)
    if (n % i == 0)
      flag = 0;
  return flag;
}
int loc(int s[], int x, int w) {
  int low = 1, high = s[0], mid;
  while (low <= high) {
    mid = (low + high) / 2;
    if (s[mid] == x)
      break;
    else if (x < s[mid])
      high = mid - 1;
    else
      low = mid + 1;
  }
  if (low <= high)
    return mid;
  else if (w > 0)
    return high;
  else
    return low;
}
int main() {
  int pt[N], a, b, c[20] = {0}, n, i, m = 0;
  for (i = N; i <= 3 * N && m < N; i++)
    if (Prime(i))
      pt[++m] = i;
  pt[0] = m;
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%d,%d", &a, &b);
    if (a < b && a >= N && b <= 3 * N)
      c[i] = loc(pt, b, 1) - loc(pt, a, 0) + 1;
  }
  for (i = 0; i < n; i++)
    printf("%d\n", c[i]);
  return 0;
}
