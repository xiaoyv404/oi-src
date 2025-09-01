#include <bits/stdc++.h>

int main() {
  unsigned int fH, fM, eH, eM;
  std::cin >> fH >> fM >> eH >> eM;

  unsigned int tH, tM;

  if (fM > eM) {
    tH = eH - fH - 1;
    tM = eM + 60 - fM;
  } else {
    tH = eH - fH;
    tM = eM - fM;
  }

  std::cout << tH << ' ' << tM << std::endl;

  return 0;
}
