#include <stdio.h>
int main() {
  char str[100] = {'\0'};
  int i = 0, len, flag;
  while ((str[i++] = getchar()) != '\n')
    ;
  len = i - 1;
  flag = 1;
  for (i = 0; i < len / 2; ++i) {
    if (str[i] != str[len - 1 - i]) {
      flag = 0;
      break;
    }
  }
  if (flag)
    printf("yes");
  else
    printf("no");
  return 0;
}
