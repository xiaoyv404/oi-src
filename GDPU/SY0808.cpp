#include "stdio.h"
int main() {
  int sc[30] = {0}, s, i, j, n;
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%d", &s);
    if (s >= 70 && s < 100)
      sc[s - 70]++;
  }
  for (i = 29; i >= 0; i--) {
    for (j = 0; j < sc[i]; j++)
      printf("%3d", i + 70);
  }
  return 0;
}
