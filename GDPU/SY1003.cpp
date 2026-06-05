#include "stdio.h"
#define N 10

struct Date {
  int year;
  int month;
  int day;
};

struct Mate {
  char name[10];
  struct Date birthday;
  char tel[12];
};

struct Mate p[N];
int Datecomp(struct Date d1,
             struct Date d2); // d1年龄比d2大返回1，相等返回0，小则返回-1

int main() {
  int i, j, k, n;
  struct Mate m;

  scanf("%d", &n);
  for (i = 0; i < n; i++) { // 输入n个联系人的信息
    scanf("%s", p[i].name);
    scanf("%d-%d-%d", &p[i].birthday.year, &p[i].birthday.month,
          &p[i].birthday.day);
    scanf("%s", p[i].tel);
  }

  for (i = 0; i < n - 1; i++) { // 选择排序算法按年龄降序排列
    k = i;
    for (j = i + 1; j < n; j++)
      if (Datecomp(p[j].birthday, p[k].birthday) == 1)
        k = j;
    if (k != i) {
      m = p[i];
      p[i] = p[k];
      p[k] = m;
    }
  }

  for (i = 0; i < n; i++)
    printf("%s,%d-%d-%d,%s\n", p[i].name, p[i].birthday.year,
           p[i].birthday.month, p[i].birthday.day, p[i].tel);

  return 0;
}

int Datecomp(struct Date d1, struct Date d2) {
  int result;

  if (d1.year < d2.year)
    result = 1;
  else if (d1.year > d2.year)
    result = -1;
  else if (d1.month < d2.month)
    result = 1;
  else if (d1.month > d2.month)
    result = -1;
  else if (d1.day < d2.day)
    result = 1;
  else if (d1.day > d2.day)
    result = -1;
  else
    result = 0;

  return result;
}
