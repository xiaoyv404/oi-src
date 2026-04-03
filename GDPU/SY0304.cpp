#include <iostream>

int main() {
  int n;
  std::cin >> n;

  bool div5 = (n % 5 == 0);
  bool div7 = (n % 7 == 0);

  if (div5 && div7) {
    std::cout << "A" << std::endl;
  } else if (div5) {
    std::cout << "B" << std::endl;
  } else if (div7) {
    std::cout << "C" << std::endl;
  } else {
    std::cout << "D" << std::endl;
  }

  return 0;
}