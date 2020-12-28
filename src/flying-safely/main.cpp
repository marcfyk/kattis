#include <iostream>

int main() {
    int t, n, m, a, b;
    std::cin >> t;
    std::string out;
    for (int i = 0; i < t; ++i) {
        std::cin >> n >> m;
        for (int j = 0; j < m; ++j) {
            int a, b;
            std::cin >> a >> b;
        }
        out += std::to_string(n - 1) + '\n';
    }

    std::cout << out;

    return 0;
}
