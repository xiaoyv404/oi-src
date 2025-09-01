#include <bits/stdc++.h>

std::string k, y, s, data;
std::unordered_map<char, char> key;

int main() {
  std::ios::sync_with_stdio(false);

  std::cin >> k >> y;
  for (size_t i = 0; i < k.size(); i++)
    if (key.find(k[i]) != key.end()) {
      std::cout << "Failed" << '\n';
      return 0;
    } else
      key[k[i]] = y[i];

  std::cin >> s;
  for (const auto &i : s)
    if (key.find(i) == key.end()) {
      std::cout << "Failed" << '\n';
      return 0;
    } else
      data += i;

  std::cout << data << '\n';

  return 0;
}
