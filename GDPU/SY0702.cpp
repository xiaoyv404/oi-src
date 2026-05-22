#include <iomanip>
#include <iostream>

int main() {
  int a[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int len = 10;
  int x1, n1, n2;

  // 输出原数组
  for (int i = 0; i < len; ++i)
    std::cout << std::setw(5) << a[i];
  std::cout << std::endl;

  // 输入插入数据
  std::cin >> x1 >> n1;

  // 插入操作
  if (n1 < 0 || n1 > len)
    n1 = len;
  for (int i = len; i > n1; --i)
    a[i] = a[i - 1];
  a[n1] = x1;
  len++;

  // 输出插入后的数组
  for (int i = 0; i < len; ++i)
    std::cout << std::setw(5) << a[i];
  std::cout << std::endl;

  // 输入删除位置
  std::cin >> n2;
  if (n2 < 0 || n2 >= len)
    n2 = 0;
  for (int i = n2; i < len - 1; ++i)
    a[i] = a[i + 1];
  len--;

  // 输出删除后的数组
  for (int i = 0; i < len; ++i)
    std::cout << std::setw(5) << a[i];

  return 0;
}