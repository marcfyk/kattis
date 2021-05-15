#include <iostream>

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    int p, q, s;
    std::cin >> p >> q >> s;
    int lcm = (p * q) / gcd(p, q);
    if (lcm > 0 and lcm <= s) {
        std::cout << "yes";
    } else {
        std::cout << "no";
    }
    return 0;
}