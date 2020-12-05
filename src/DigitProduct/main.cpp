#include <iostream>

int product_nonzero_digits(int x) {
    int num = x;
    int product = 1;
    while (x != 0) {
        product *= (x % 10 == 0 ? 1 : x % 10);
        x /= 10;
    }
    return product;
}

int main() {
    int x;
    std::cin >> x;
    while (x / 10 != 0) {
        x = product_nonzero_digits(x);
    }
    std::cout << x;
    return 0;
}