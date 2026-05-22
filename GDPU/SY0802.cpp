#include <stdio.h>
int main() {
  int a[100], n, i, j, m, flag;
  scanf("%d", &n);
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  for (i = 1; i < n; i++) {
    m = a[i];
    flag = 0;
    for (j = i - 1; j >= 0 && a[j] > m; j--) {
      a[j + 1] = a[j];
      flag = 1;
    }
    if (flag)
      a[j + 1] = m;
  }
  for (i = 0; i < n; i++)
    printf("%5d", a[i]);
  return 0;
}
