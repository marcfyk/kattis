#include <iostream>

int main() {
    int a, b, c, d, p, m, g;
    std::cin >> a >> b >> c >> d >> p >> m >> g;

    int interval_one = a + b;
    int interval_two = c + d;

    for (const int x : {p, m, g}) {
        int mod_one = x % interval_one;
        int mod_two = x % interval_two;
        bool attack_one = 0 < mod_one and mod_one <= a;
        bool attack_two = 0 < mod_two and mod_two <= c;
        if (attack_one and attack_two) {
            std::cout << "both\n";
        } else if (attack_one or attack_two) {
            std::cout << "one\n";
        } else {
            std::cout << "none\n";
        }
    }
}