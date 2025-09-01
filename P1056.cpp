#include <bits/stdc++.h>

// 50 分

unsigned int m, n, k, l, d, xlsum, ylsum;

int Xi, Yi, Pi, Qi;

int main() {
  std::cin >> m >> n >> k >> l >> d;

  unsigned int y[n - 1]{}, x[m - 1]{};

  for (size_t i = 0; i < d; i++) {
    std::cin >> Xi >> Yi >> Pi >> Qi;
    if (Xi == Pi) {
      if (Yi > Qi) {
        if (y[abs(Yi - 2)] == 0)
          ylsum++;
        y[abs(Yi - 2)] = 1;
      } else {
        if (y[abs(Qi - 2)] == 0)
          ylsum++;
        y[abs(Qi - 2)] = 1;
      }
    } else {
      if (Xi > Pi) {
        if (x[abs(Xi - 2)] == 0)
          xlsum++;
        x[abs(Xi - 2)] = 1;
      } else {
        if (x[abs(Pi - 2)] == 0)
          xlsum++;
        x[abs(Pi - 2)] = 1;
      }
    }
  }

  for (size_t i = 0; i < (n - 1); i++) {
    if (x[i] == 1) {
      std::cout << i + 1;
      xlsum--;
      if (xlsum == 0)
        break;
      else
        std::cout << ' ';
    }
  }

  std::cout << '\n';

  for (size_t i = 0; i < (m - 1); i++) {
    if (y[i] == 1) {
      std::cout << i + 1;
      ylsum--;
      if (ylsum == 0)
        break;
      else
        std::cout << ' ';
    }
  }

  std::cout << '\n';
  return 0;
}
