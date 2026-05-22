#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int original = n;
    std::cout << original << "=";

    bool first = true;
    for (int factor = 2; n > 1; ++factor) {
        while (n % factor == 0) {
            if (!first) {
                std::cout << "*";
            }
            std::cout << factor;
            first = false;
            n /= factor;
        }
    }

    return 0;
}