#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int sum = 0;
    for (auto i = 0; i < n; ++i) {
        int value;
        std::cin >> value;
        sum += value;
    }
    std::cout << sum;
    return 0;
}