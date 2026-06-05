#include <cstdio>
#include <cstring>

#define N 10

struct Book {
  char name[100];
  float price;
};

int instring(char *s1, char *s2); // s1若属于s2的子串，则返回1，否则返回0

int main() {
  int i, flag = 0;
  Book books[N] = {{"Fling in sky", 23.0},      {"I love my mother", 15.5},
                   {"My love", 25.6},           {"Color is red", 34.9},
                   {"Black and red", 20.5},     {"Let me love you", 16.0},
                   {"Sun is red", 45.0},        {"Flower sunshine", 23.8},
                   {"Say love not easy", 45.9}, {"Friday black", 34.0}};

  char name[20];
  scanf("%19s", name);

  for (i = 0; i < N; i++) {
    if (instring(name, books[i].name)) {
      printf("%s:%g\n", books[i].name, books[i].price);
      flag = 1;
    }
  }

  if (flag == 0)
    printf("None\n");

  return 0;
}

int instring(char *s1, char *s2) { // s1若属于s2的子串，则返回1，否则返回0
  if (strstr(s2, s1) != nullptr)
    return 1;
  return 0;
}
