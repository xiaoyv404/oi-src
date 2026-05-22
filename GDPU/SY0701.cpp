#include <stdio.h>

int main() {
  int n, x;
  scanf("%d", &n);
  int a[105];
  for (int i = 0; i < n; ++i) {
    scanf("%d", &a[i]);
  }
  scanf("%d", &x);

  int max_idx = -1;
  int greater_cnt = 0, less_cnt = 0;
  for (int i = 0; i < n; ++i) {
    if (a[i] == x)
      max_idx = i + 1; // 1-based index
    if (a[i] > x)
      ++greater_cnt;
    if (a[i] < x)
      ++less_cnt;
  }
  printf("%d\n", max_idx);
  printf("%d\n", greater_cnt);
  printf("%d\n", less_cnt);
  return 0;
}
