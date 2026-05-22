#include <iomanip>
#include <ios>
#include <iostream>

int main() {
  double n, p;

  std::cin >> n;

  if (n >= 50) {
    p = 50 * 0.53 + (n - 50) * 0.58;
  } else {
    p = n * 0.53;
  }
  std::cout << std::fixed << std::setprecision(2) << p;
}