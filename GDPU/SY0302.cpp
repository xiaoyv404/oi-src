#include <cmath>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
  string s1, s2, s3;
  if (!getline(cin, s1) || !getline(cin, s2) || !getline(cin, s3)) {
    return 0;
  }

  double x1, y1, x2, y2, x3, y3;
  for (char &ch : s1) {
    if (ch == ',')
      ch = ' ';
  }
  for (char &ch : s2) {
    if (ch == ',')
      ch = ' ';
  }
  for (char &ch : s3) {
    if (ch == ',')
      ch = ' ';
  }

  stringstream ss1(s1), ss2(s2), ss3(s3);
  if (!(ss1 >> x1 >> y1) || !(ss2 >> x2 >> y2) || !(ss3 >> x3 >> y3)) {
    return 0;
  }

  auto dist = [](double xa, double ya, double xb, double yb) {
    double dx = xa - xb;
    double dy = ya - yb;
    return sqrt(dx * dx + dy * dy);
  };

  double a = dist(x1, y1, x2, y2);
  double b = dist(x2, y2, x3, y3);
  double c = dist(x1, y1, x3, y3);

  const double eps = 1e-9;
  bool ok = (a > eps && b > eps && c > eps && a + b > c + eps &&
             a + c > b + eps && b + c > a + eps);

  if (!ok) {
    cout << "Impossible" << std::endl;
    return 0;
  }

  double perimeter = a + b + c;
  double cross = (x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1);
  double area = fabs(cross) / 2.0;

  cout << fixed << setprecision(2);
  cout << "primeter=" << perimeter << ",area=" << area << std::endl;

  return 0;
}
