#include <cstddef>
#include <iostream>
using namespace std;

bool is_prime[100000];

void prime(int n) {
  is_prime[0] = is_prime[1] = false;
  for (size_t i = 2; i <= n; i++)
    is_prime[i] = true;
  for (size_t i = 2; i <= n; i++) {
    if (!is_prime[i])
      continue;
    if (i * i > n)
      continue;
    for (int j = i * i; j <= n; j += i) {
      is_prime[j] = false;
    }
  }
}

int main() {
  int n;
  cin >> n;
  int list[n];
  int max = 0;
  for (size_t i = 0; i < n; i++) {
    cin >> list[i];
    max = std::max(list[i], max);
  }
  prime(max);
  for (size_t i = 0; i < n; i++) {
    if (!is_prime[list[i]]) {
      continue;
    }
    cout << list[i] << ' ';
  }
}
