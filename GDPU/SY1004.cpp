#include <iostream>
#include <string>

using namespace std;

struct Student {
  string name;
  int score;
};

int main() {
  int n;
  cin >> n;

  Student stu[110];
  int sum = 0;

  for (int i = 0; i < n; i++) {
    cin >> stu[i].name;
    cin >> stu[i].score;
    sum += stu[i].score;
  }

  double avg = static_cast<double>(sum) / n;

  for (int i = 0; i < n; i++) {
    if (stu[i].score > avg) {
      cout << stu[i].name << "," << stu[i].score << "\n";
    }
  }

  return 0;
}
