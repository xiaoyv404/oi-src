#include <bits/stdc++.h>

unsigned int m, n, t, data;

int main() {
  std::cin >> m >> n;
  std::vector<unsigned int> memory;
  for (size_t i = 0; i < n; i++) {
    std::cin >> t;
    if (std::find(memory.begin(), memory.end(), t) == memory.end()) {
      memory.push_back(t);
      data++;
    }
    if (memory.size() > m) {
      memory.erase(memory.begin());
    }
  }

  std::cout << data << std::endl;
  return 0;
}
