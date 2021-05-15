#include <iostream>
#include <vector>

int main() {
    int n, m;
    std::cin >> n >> m;
    int d = m / n;
    int r = m % n;

    auto longrow = std::string(d + 1, '*') + '\n';
    auto row = std::string(d, '*') + '\n';

    std::string out;
    for (int i = 0; i < r; ++i) {
        out += longrow;
    }
    for (int i = 0; i < n - r; ++i) {
        out += row;
    }
    std::cout << out;

    return 0;
}