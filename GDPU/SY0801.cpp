#include <stdio.h>
int main() {
  int n, a[20][20];
  scanf("%d", &n);
  for (int i = 0; i < n; ++i)
    for (int j = 0; j < n; ++j)
      scanf("%d", &a[i][j]);
  int line = 0, col = 0;
  for (int i = 0; i < n; ++i)
    for (int j = 0; j < n; ++j)
      if (a[i][j] > a[line][col]) {
        line = i;
        col = j;
      }
  printf("[%d,%d]=%d\n", line, col, a[line][col]);
  return 0;
}
