#include <iostream>
#include <cmath>

int main() {
    int n;
    std::cin >> n;
    if (n % 2 == 0) {
        int half = n / 2;
        if (half % 2 == 1) {
            std::cout << "Odd";
        } else {
            std::cout << "Even";
        }
    } else {
        std::cout << "Either";
    }
    return 0;
}