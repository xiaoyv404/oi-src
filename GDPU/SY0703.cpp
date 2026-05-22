#include <cstdio>
#include <cctype>

int cnt[26];
char s[85];

int main() {
    fgets(s, sizeof(s), stdin);
    for (int i = 0; s[i]; i++)
        if (isalpha(s[i])) cnt[tolower(s[i]) - 'a']++;
    for (int i = 0; i < 26; i++)
        if (cnt[i]) printf("%c is %d\n", 'a' + i, cnt[i]);
    return 0;
}
