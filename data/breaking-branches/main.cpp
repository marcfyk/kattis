#include <iostream>

int main() {
    int n;
    std::cin >> n;
    if (n % 2 == 0) {
        std::cout << "Alice\n1";
    } else {
        std::cout << "Bob";
    }
    return 0;
}