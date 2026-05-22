#include <iostream>
using namespace std;

int main() {
  int a, b, c, d;
  for (a = 1; a <= 4; a++) {
    for (b = 1; b <= 4; b++) {
      if (b == a)
        continue;
      for (c = 1; c <= 4; c++) {
        if (c == a || c == b)
          continue;
        for (d = 1; d <= 4; d++) {
          if (d == a || d == b || d == c)
            continue;
          int cnt = 0;
          // 甲: 丙第一(a丙,c==1)，我第三(a==3)
          int jia = ((c == 1) ? 1 : 0) + ((a == 3) ? 1 : 0);
          // 乙: 我第一(b==1)，丁第四(d==4)
          int yi = ((b == 1) ? 1 : 0) + ((d == 4) ? 1 : 0);
          // 丙: 丁第二(d==2)，我第三(c==3)
          int bing = ((d == 2) ? 1 : 0) + ((c == 3) ? 1 : 0);
          if (jia == 1 && yi == 1 && bing == 1) {
            cout << a << b << c << d;
            return 0;
          }
        }
      }
    }
  }
  return 0;
}