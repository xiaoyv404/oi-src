#include <cstdio>

void dec2bin(int n, char *s, int *index) {
  if (n > 1)
    dec2bin(n / 2, s, index);
  s[*index] = (n % 2) + '0';
  (*index)++;
}

int main() {
  int n, i, index = 0;
  char r[64];

  scanf("%d", &n);
  dec2bin(n, r, &index);

  for (i = 0; i < index; i++)
    printf("%c", r[i]);

  return 0;
}
