#include <stdio.h>
#include <string.h>
#define N 100
int isalpha(char ch) {
  if (ch >= 'a' && ch <= 'z')
    return 1;
  else if (ch >= 'A' && ch <= 'Z')
    return -1;
  else
    return 0;
}
int extract(char *s, char words[][80]) {
  int i = 0, j = 0, n = -1, flag = 0;
  char ch;
  while ((ch = s[i]) != '\0') {
    if (isalpha(ch)) {
      if (flag == 0) { // 新单词开始
        n++;
        j = 0;
        words[n][j] = ch;
        flag = 1;
      } else {
        words[n][++j] = ch;
      }
    } else if (flag) {
      words[n][++j] = '\0';
      flag = 0;
    }
    i++;
  }
  if (flag) // 句末为字母时补充结尾
    words[n][++j] = '\0';
  return n + 1;
}
void strsort(char str[][80], int n) {
  int i, j;
  char t[80];
  for (i = 1; i < n; i++)
    for (j = 0; j < n - i; j++)
      if (strcmp(str[j], str[j + 1]) > 0) {
        strcpy(t, str[j]);
        strcpy(str[j], str[j + 1]);
        strcpy(str[j + 1], t);
      }
}
int main() {
  char line[81], words[N][80];
  int i, n;
  fgets(line, sizeof(line), stdin);
  line[strcspn(line, "\n")] = '\0';
  n = extract(line, words);
  strsort(words, n);
  for (i = 0; i < n; i++)
    puts(words[i]);
  return 0;
}
