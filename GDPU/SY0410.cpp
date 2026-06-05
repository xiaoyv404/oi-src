#include <cstdio>

int main() {
  int c;
  scanf("%d", &c);

  int ok = 0;
  int c2 = c * c;

  for (int a = 1; a < c && !ok; a++) {
    for (int b = a; b < c; b++) {
      if (a * a + b * b == c2) {
        ok = 1;
        break;
      }
    }
  }

  if (ok)
    printf("%d:yes", c);
  else
    printf("%d:no", c);

  return 0;
}
