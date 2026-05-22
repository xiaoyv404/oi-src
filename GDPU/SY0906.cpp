#include <stdio.h>
#include <string.h>
void unzip(char *s1, char *s2) {
  int i, n = 0, flag = 0;
  char *p = s1, *q = s2;
  while (*p != '\0') {
    if (*p >= '0' && *p <= '9') {
      if (flag)
        n = n * 10 + (*p - '0');
      else {
        n = (*p - '0');
        flag = 1;
      }
    } else {
      if (n) {
        for (i = 0; i < n; ++i)
          *q++ = *p;
        n = 0;
      } else {
        *q++ = *p;
      }
      flag = 0;
    }
    p++;
  }
  *q = '\0';
}
int main() {
  char s1[80], s2[1000];
  fgets(s1, sizeof(s1), stdin);
  s1[strcspn(s1, "\n")] = '\0';
  unzip(s1, s2);
  puts(s2);
  return 0;
}
