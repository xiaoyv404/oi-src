#include "stdio.h"
int main() {
  int a[100] = {0}, i, j, x;
  scanf("%d", &a[0]);
  for (i = 1; i <= a[0]; i++)
    scanf("%d", &a[i]);
  scanf("%d", &x);
  for (i = 1; i <= a[0]; i++)
    printf("%5d", a[i]);
  printf("\n");
  i = 1;
  while (a[i] != x && i <= a[0])
    i++;
  j = i + 1;
  while (a[j] == x && j <= a[0])
    j++;
  while (j <= a[0]) {
    if (a[j] == x)
      j++;
    else {
      a[i] = a[j];
      i++;
      j++;
    }
  }
  a[0] = i - 1;
  if (a[0] > 0)
    for (i = 1; i <= a[0]; i++)
      printf("%5d", a[i]);
  else
    printf("empty");
  return 0;
}
