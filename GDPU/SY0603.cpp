#include <iostream>
#include <string>

int main() {
  std::string s;
  std::getline(std::cin, s);
  for (char &c : s) {
    c = c xor 0x0F;
  }
  std::cout << s;
  return 0;
}