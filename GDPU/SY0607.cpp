#include <cctype>
#include <iostream>
#include <string>

int main() {
  std::string s;
  std::getline(std::cin, s);
  int result = 0, num = 0;
  char op = '+';
  for (size_t i = 0; i < s.size(); ++i) {
    char c = s[i];
    if (std::isdigit(c)) {
      num = num * 10 + (c - '0');
    } else if (c == '+' || c == '-' || c == '*' || c == '/' || c == '=') {
      switch (op) {
      case '+':
        result += num;
        break;
      case '-':
        result -= num;
        break;
      case '*':
        result *= num;
        break;
      case '/':
        result /= num;
        break;
      }
      if (c == '=')
        break;
      op = c;
      num = 0;
    }
  }
  std::cout << result;
  return 0;
}
