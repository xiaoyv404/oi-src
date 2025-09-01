#include <bits/stdc++.h>

unsigned size;

int main() {
  std::cin >> size;
  unsigned int numbers[size];
  for (size_t i = 0; i < size; i++) {
    std::cin >> numbers[i];
  }

  std::random_shuffle(numbers, numbers + size);
  std::sort(numbers, numbers + size);

  for (size_t i = 0; i < size; i++) {
    std::cout << numbers[i];

    if (i == size)
      std::cout << '\n';
    else
      std::cout << ' ';
  }

  return 0;
}
