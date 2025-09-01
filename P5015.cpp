#include <bits/stdc++.h>

std::string s;

unsigned int sum;

int main() {
  std::getline(std::cin, s);

  for (size_t i = 0; i < s.length(); i++) {
    if (s[i] != ' ')
      sum++;
  }

  std::cout << sum << '\n';
  return 0;
}
