#include <iostream>

int main() {
    std::string n;
    std::cin >> n;
    n[0] ^= n[1];
    n[1] ^= n[0];
    n[0] ^= n[1];
    std::cout << n;
    return 0;
}