#include <bits/stdc++.h>

char s;
unsigned int win[62503], w, l;

int main() {
  for (size_t i = 0; std::cin >> s && s != 'E'; i++) {
    if (s == 'W')
      win[i] = 1;
    else if (s == 'L')
      win[i] = 2;
  }

  for (size_t i = 0; true; i++) {
    if (win[i] == 1)
      w++;
    else if (win[i] == 2)
      l++;
    else {
      std::cout << w << ':' << l << std::endl << std::endl;
      w = 0;
      l = 0;
      break;
    }

    if (abs((int)w - (int)l) >= 2 && ((w >= 11) || (l >= 11))) {
      std::cout << w << ':' << l << std::endl;
      w = 0;
      l = 0;
    }
  }

  for (size_t i = 0; true; i++) {
    if (win[i] == 1)
      w++;
    else if (win[i] == 2)
      l++;
    else {
      std::cout << w << ':' << l << std::endl;
      break;
    }

    if (abs((int)w - (int)l) >= 2 && ((w >= 21) || (l >= 21))) {
      std::cout << w << ':' << l << std::endl;
      w = 0;
      l = 0;
    }
  }

  return 0;
}
