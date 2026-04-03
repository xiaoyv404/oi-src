#include <iostream>
using namespace std;

int main() {
  int y, m, d;
  char c1, c2;

  cin >> y >> c1 >> m >> c2 >> d;

  bool ok = false;

  if (c1 == '-' && c2 == '-') {
    if (d == 31 && d >= 1 &&
        (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 ||
         m == 12)) {
      ok = true;
    } else if (d == 30 && d >= 1 && (m == 4 || m == 6 || m == 9 || m == 11)) {
      ok = true;
    } else if (d == 29 && d >= 1 && m == 2) {
      bool leap = (y % 400 == 0) || (y % 4 == 0 && y % 100 != 0);
      if (leap)
        ok = true;
    } else if (d == 28 && d >= 1 && m == 2) {
      bool leap = (y % 400 == 0) || (y % 4 == 0 && y % 100 != 0);
      if (!leap)
        ok = true;
    } else if (d >= 1 && d <= 27 && m >= 1 && m <= 12) {
      ok = true;
    }
  }

  cout << (ok ? "yes" : "no");
  return 0;
}
