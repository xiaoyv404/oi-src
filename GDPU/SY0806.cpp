#include <stdio.h>
int main() {
  int a[20][20], max[20], n, m, k, i, j, flag;
  scanf("%d", &n);
  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
      scanf("%d", &a[i][j]);
  max[0] = a[0][0];
  for (i = 1; i < n; i++) {
    m = max[i] = a[0][i];
    flag = 0;
    for (j = i - 1; j >= 0 && max[j] < m; j--) {
      max[j + 1] = max[j];
      flag = 1;
    }
    if (flag)
      max[j + 1] = m;
  }
  for (i = 1; i < n; i++)
    for (j = 0; j < n; j++) {
      m = a[i][j];
      flag = 0;
      for (k = n - 1; k >= 0 && m > max[k]; k--) {
        if (k < n - 1)
          max[k + 1] = max[k];
        flag = 1;
      }
      if (flag)
        max[k + 1] = m;
    }
  for (i = 0; i < n; i++)
    printf("%5d", max[i]);
  return 0;
}
