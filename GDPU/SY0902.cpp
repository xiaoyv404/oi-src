#include <stdio.h>
#include <string.h>
int findsubstring(char *s, char *sub) {
  int len1 = strlen(s), len2 = strlen(sub);
  for (int i = 0; i <= len1 - len2; ++i) {
    int j = 0;
    while (j < len2 && s[i + j] == sub[j])
      ++j;
    if (j == len2)
      return i;
  }
  return -1;
}
int main() {
  char line[80], substr[10];
  int index;
  fgets(line, sizeof(line), stdin);
  line[strcspn(line, "\n")] = '\0';
  fgets(substr, sizeof(substr), stdin);
  substr[strcspn(substr, "\n")] = '\0';
  index = findsubstring(line, substr);
  if (index >= 0)
    printf("yes");
  else
    printf("no");
  return 0;
}
