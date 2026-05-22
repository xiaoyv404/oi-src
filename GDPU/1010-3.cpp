#include <iostream>

int main() {
  double km;
  int wait;
  char comma;
  std::cin >> km >> comma >> wait;

  double money = 10; // 起步价
  if (km > 3) {
    if (km <= 10) {
      money += (km - 3) * 2;
    } else {
      money += (10 - 3) * 2 + (km - 10) * 3;
    }
  }

  // 延时补贴
  if (wait >= 5) {
    money += (int)(wait / 5) * 2;
  }

  // 四舍五入到元
  int ans = (int)(money + 0.5);
  std::cout << "money=" << ans;
  return 0;
}