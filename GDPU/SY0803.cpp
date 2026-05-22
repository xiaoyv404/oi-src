#include <stdio.h>
int main() {
  int n, a[20][20], flag = 1;
  scanf("%d", &n);
  for (int i = 0; i < n; ++i)
    for (int j = 0; j < n; ++j)
      scanf("%d", &a[i][j]);
  for (int i = 0; i < n && flag; ++i)
    for (int j = 0; j < n; ++j)
      if (a[i][j] != a[j][i]) {
        flag = 0;
        break;
      }
  if (flag)
    printf("yes");
  else
    printf("no");
  return 0;
}
