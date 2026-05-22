#include "stdio.h"
int main() {
  int a[100] = {0}, i, j, k, flag;
  scanf("%d", &a[0]);
  for (i = 1; i <= a[0]; i++)
    scanf("%d", &a[i]);
  for (i = 1; i <= a[0]; i++)
    printf("%5d", a[i]);
  printf("\n");
  i = 2;
  while (i <= a[0]) {
    flag = 1;
    k = 1;
    while (flag && k < i) {
      if (a[k] == a[i])
        flag = 0;
      k++;
    }
    if (flag)
      i++;
    else
      break;
  }
  j = i + 1;
  while (j <= a[0]) {
    flag = 1;
    k = 1;
    while (flag && k < i) {
      if (a[k] == a[j])
        flag = 0;
      k++;
    }
    if (flag == 0)
      j++;
    else if (i < j && j <= a[0]) {
      a[i] = a[j];
      i++, j++;
    }
  }
  a[0] = i - 1;
  for (i = 1; i <= a[0]; i++)
    printf("%5d", a[i]);
  return 0;
}
