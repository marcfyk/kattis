#include <iostream>

int main() {
    long l, n;
    std::cin >> l >> n;
    int count = 1;
    while (l % n) {
        ++count;
        n -= (l % n);
    }
    std::cout << count;
    return 0;
}