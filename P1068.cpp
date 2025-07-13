#include <bits/stdc++.h>

uint n, m, g, pline, rp;

struct {
    uint a, b;
} l[5050];

int main() {
    std::ios::sync_with_stdio(false);

    std::cin >> n >> m;

    for (size_t i = 0; i < n; i++) {
        std::cin >> l[i].a >> l[i].b;
    }

    std::sort(l, l + n, [](const auto& a, const auto& b) {
        return a.b == b.b ? a.a < b.a : a.b > b.b;
    });

    g = (int)(m * 1.5);
    pline = l[g - 1].b;

    for (size_t i = 0; i < n; i++)
        if (l[i].b >= pline) rp++;

    std::cout << pline << ' ' << rp << '\n';

    for (size_t i = 0; i < rp; i++)
        std::cout << l[i].a << ' ' << l[i].b << '\n';

    return 0;
}