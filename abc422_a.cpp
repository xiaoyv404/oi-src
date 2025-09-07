#include <bits/stdc++.h>

int main() {
  std::string in;
  std::cin >> in;
  int ii = in[0] - '0';
  int ij = in[2] - '0';
  if (ij == 8) {
    ij = 1;
    ii++;
  } else {
    ij++;
  }
  std::cout << ii << '-' << ij << std::endl;
}
