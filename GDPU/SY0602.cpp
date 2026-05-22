#include <iostream>
#include <string>

int main() {
  std::string s;
  std::getline(std::cin, s);
  for (char &c : s) {
    if (c >= 'A' && c <= 'Z') {
      c = 'A' + ('Z' - c);
    } else if (c >= 'a' && c <= 'z') {
      c = 'a' + ('z' - c);
    } else if (c >= '0' && c <= '9') {
      c = '0' + ('9' - c);
    }
  }
  std::cout << s;
  return 0;
}
