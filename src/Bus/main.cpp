#include <iostream>
#include <string>

int main() {
    int T;
    std::cin >> T;
    std::string out;
    for (int i = 0; i < T; ++i) {
        int k;
        std::cin >> k;
        int n = 0;
        for (int j = 0; j < k; ++j) {
            n *= 2;
            ++n;
        }
        out += std::to_string(n) + '\n';
    }
    std::cout << out;
    return 0;
}