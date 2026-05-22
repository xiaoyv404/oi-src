#include <stdio.h>
int main() {
  int a[20][20], n, i, j, flag = 0, col;
  scanf("%d", &n);
  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
      scanf("%d", &a[i][j]);
  for (i = 0; i < n; i++) {
    col = 0;
    for (j = 1; j < n; j++)
      if (a[i][col] < a[i][j])
        col = j;
    flag = 1;
    for (j = 0; j < n && flag; j++) {
      if (a[i][col] > a[j][col])
        flag = 0;
    }
    if (flag) {
      printf("[%d,%d]=%d\n", i, col, a[i][col]);
      break;
    }
  }
  if (!flag)
    printf("no");
  return 0;
}
