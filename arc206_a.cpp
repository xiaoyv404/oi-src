#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int main() {
  int n;
  std::cin >> n;
  std::vector<int> A(1000010);
  std::vector<int> ls(1000010);

  for (int i = 0; i < n; i++) {
    std::cin >> A[i];
  }
  long long as = 1;
  for (int i = n - 1; i >= 0; i--) {
    if (A[i] != A[i + 1]) {
      as += n - i - 1 - ls[A[i]];
    }
    ls[A[i]]++;
  }
  std::cout << as << std::endl;
  return 0;
}
