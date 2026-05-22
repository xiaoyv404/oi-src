#include <stdio.h>
#include <string.h>
#define N 20
int main() {
  char str[N][80];
  int i, j, k, t, n, len[N][2];
  scanf("%d", &n);
  getchar();
  for (i = 0; i < n; i++) {
    scanf("%s", str[i]);
    len[i][1] = strlen(str[i]);
    len[i][0] = i;
  }
  for (i = 0; i < n - 1; i++) {
    k = i;
    for (j = i + 1; j < n; j++)
      if (len[j][1] < len[k][1])
        k = j;
    if (k != i) {
      int temp0 = len[i][0], temp1 = len[i][1];
      len[i][0] = len[k][0];
      len[i][1] = len[k][1];
      len[k][0] = temp0;
      len[k][1] = temp1;
    }
  }
  for (i = 0; i < n; i++)
    puts(str[len[i][0]]);
  return 0;
}
