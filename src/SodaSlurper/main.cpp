#include <iostream>

int main() {
    int e, f, c;
    std::cin >> e >> f >> c;

    int empty = e + f;
    int sodas = 0;
    while (empty >= c) {
        empty -= (c - 1);
        ++sodas;
    }

    std::cout << sodas;
}