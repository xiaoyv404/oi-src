#include <bits/stdc++.h>

unsigned int rTime, dTime, h, m;

double s, v;

int main() {
  std::cin >> s >> v;

  rTime = ceil(s / v);

  if (rTime > 470) {
    dTime = 1910 - rTime;
  } else {
    dTime = 470 - rTime;
  }

  m = dTime % 60;
  h = (dTime - m) / 60;

  if (h > 9) {
    std::cout << h;
  } else {
    std::cout << '0' << h;
  }

  std::cout << ':';

  if (m > 9) {
    std::cout << m;
  } else {
    std::cout << '0' << m;
  }
}
