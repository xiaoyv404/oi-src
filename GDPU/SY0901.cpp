#include <stdio.h>
#define N 100
void insert(int s[], int x, int n) {
  int i;
  if (x > s[n - 1])
    s[n] = x;
  else {
    for (i = n; i > 0 && s[i - 1] > x; i--)
      s[i] = s[i - 1];
    s[i] = x;
  }
}
void insertsort(int s[], int n) {
  for (int i = 1; i < n; ++i)
    insert(s, s[i], i);
}
int main() {
  int i, n, a[N];
  scanf("%d", &n);
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  insertsort(a, n);
  for (i = 0; i < n; i++)
    printf("%5d", a[i]);
  return 0;
}
