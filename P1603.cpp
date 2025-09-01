#include <bits/stdc++.h>

std::map<std::string, unsigned int> xMap;
std::string s;
unsigned int data[100], cursor = 0;

int main() {
  xMap["one"] = 1;
  xMap["two"] = 2;
  xMap["three"] = 3;
  xMap["four"] = 4;
  xMap["five"] = 5;
  xMap["six"] = 6;
  xMap["seven"] = 7;
  xMap["eight"] = 8;
  xMap["nine"] = 9;
  xMap["ten"] = 10;
  xMap["eleven"] = 11;
  xMap["twelve"] = 12;
  xMap["thirteen"] = 13;
  xMap["fourteen"] = 14;
  xMap["fifteen"] = 15;
  xMap["sixteen"] = 16;
  xMap["seventeen"] = 17;
  xMap["eighteen"] = 18;
  xMap["nineteen"] = 19;
  xMap["twenty"] = 20;
  xMap["a"] = 1;
  xMap["both"] = 2;
  xMap["another"] = 1;
  xMap["first"] = 1;
  xMap["second"] = 2;
  xMap["third"] = 3;
  for (size_t i = 1; i <= 6; i++) {
    std::cin >> s;
    if (xMap[s]) {
      unsigned int k = xMap[s] * xMap[s] % 100;
      if (k != 0) {
        data[++cursor] = k;
      }
    }
  }
  std::sort(data + 1, data + cursor + 1);
  std::cout << data[1];
  for (int i = 2; i <= cursor; i++) {
    if (data[i] < 10)
      std::cout << 0;
    std::cout << data[i];
  }
  return 0;
}
