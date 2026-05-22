#include <iostream>

int main() {
	int n;
	std::cin >> n;

	int a = 1;
	for (int i = 1; i < n; ++i) {
		a = (a + 1) * 2;
	}

	std::cout << "Totals=" << a;
	return 0;
}
