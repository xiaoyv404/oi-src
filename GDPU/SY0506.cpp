#include <stdio.h>

int Isleap(int year) {
  return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int Yeardays(int year) { return Isleap(year) ? 366 : 365; }

int IsDate(int year, int month, int day) {
  int mdays[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  if (month < 1 || month > 12)
    return 0;
  if (Isleap(year))
    mdays[2] = 29;
  if (day < 1 || day > mdays[month])
    return 0;
  return 1;
}

int Totaldays(int year, int month, int day) {
  int mdays[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int sum = 0;
  if (Isleap(year))
    mdays[2] = 29;
  for (int i = 1; i < month; i++)
    sum += mdays[i];
  sum += day;
  return sum;
}

int main() {
  int y1, m1, d1, y2, m2, d2;
  if (scanf("%d-%d-%d", &y1, &m1, &d1) != 3)
    return 1;
  if (scanf("%d-%d-%d", &y2, &m2, &d2) != 3)
    return 1;
  if (!IsDate(y1, m1, d1) || !IsDate(y2, m2, d2)) {
    printf("Date error");
    return 0;
  }
  // 保证日期1 <= 日期2
  if (y1 > y2 || (y1 == y2 && m1 > m2) || (y1 == y2 && m1 == m2 && d1 > d2)) {
    int t;
    t = y1;
    y1 = y2;
    y2 = t;
    t = m1;
    m1 = m2;
    m2 = t;
    t = d1;
    d1 = d2;
    d2 = t;
  }
  int days = 0;
  if (y1 == y2) {
    days = Totaldays(y2, m2, d2) - Totaldays(y1, m1, d1);
  } else {
    days = Yeardays(y1) - Totaldays(y1, m1, d1) + Totaldays(y2, m2, d2);
    for (int y = y1 + 1; y < y2; y++)
      days += Yeardays(y);
  }
  printf("days=%d\n", days);
  return 0;
}
