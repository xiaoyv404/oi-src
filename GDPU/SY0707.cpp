#include <stdio.h>
int main() {
  int n, i, j, s1[10] = {10, 21, 34, 12, 15, 8, 17, 20, 23, 30}, s2[10], flag;
  scanf("%d", &n);
  for (i = 0; i < n; i++)
    scanf("%d", &s2[i]);
  flag = 0;
  for (i = 0; i < 10; i++) {
    int found = 0;
    for (j = 0; j < n; j++)
      if (s1[i] == s2[j])
        found = 1;
    if (found) {
      printf("%5d", s1[i]);
      flag = 1;
    }
  }
  if (!flag)
    printf("empty");
  return 0;
}
