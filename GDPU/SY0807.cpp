#include <stdio.h>
int main() {
  int n, m, a[100], cnt = 0, i, left, idx = 0, num = 0;
  scanf("%d,%d", &n, &m);
  for (i = 0; i < n; i++)
    a[i] = 1; // 1表示在圈内
  left = n;
  while (left > m) {
    if (a[idx]) {
      num++;
      if (num == m) {
        a[idx] = 0;
        left--;
        num = 0;
      }
    }
    idx = (idx + 1) % n;
  }
  for (i = 0, cnt = 0; i < n; i++)
    if (a[i]) {
      printf("%5d", i + 1);
      cnt++;
    }
  return 0;
}
