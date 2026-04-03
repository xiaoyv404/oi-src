#include <iostream>
using namespace std;

int main() {
  int month;
  cin >> month;

  if (month >= 2 && month <= 4) {
    cout << "Spring" << std::endl;
  } else if (month >= 5 && month <= 7) {
    cout << "Summer" << std::endl;
  } else if (month >= 8 && month <= 10) {
    cout << "Autumn" << std::endl;
  } else if ((month >= 11 && month <= 12) || month == 1) {
    cout << "Winter" << std::endl;
  } else {
    cout << "Error" << std::endl;
  }

  return 0;
}
