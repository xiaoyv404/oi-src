#include <iostream>

using namespace std;

struct Time {
  int hour;
  int minute;
  int second;
};

int main() {
  Time t1;
  int n;
  char c1, c2;

  cin >> t1.hour >> c1 >> t1.minute >> c2 >> t1.second;
  cin >> n;

  int total = t1.hour * 3600 + t1.minute * 60 + t1.second;
  total = (total + n) % (24 * 3600);

  t1.hour = total / 3600;
  t1.minute = (total % 3600) / 60;
  t1.second = total % 60;

  cout << t1.hour << ":" << t1.minute << ":" << t1.second;

  return 0;
}
