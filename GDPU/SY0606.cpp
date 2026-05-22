#include <cctype>
#include <iostream>
#include <string>

int main() {
  std::string s;
  std::getline(std::cin, s);
  std::string word;
  for (char c : s) {
    if (std::isalpha(c)) {
      word += c;
    } else {
      if (!word.empty()) {
        word[0] = std::toupper(word[0]);
        std::cout << word << std::endl;
        word.clear();
      }
    }
  }
  if (!word.empty()) {
    word[0] = std::toupper(word[0]);
    std::cout << word;
  }
  return 0;
}
