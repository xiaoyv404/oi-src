#include <bits/stdc++.h>

unsigned int num, size;
std::set<unsigned int> numbers;

int main() {
  std::cin >> size;

  for (size_t i = 0; i < size; i++) {
    std::cin >> num;
    numbers.insert(num);
  }
  std::cout << numbers.size() << '\n';

  while (!numbers.empty()) {
    std::cout << *numbers.begin() << ' ';
    numbers.erase(numbers.begin());
  }

  std::cout << '\n';
  return 0;
}
