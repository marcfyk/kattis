#include <iostream>

int sum_digits(int n) {
    int sum = 0;
    int x = n;
    while (x != 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}


int main() {
    int N;
    std::cin >> N;

    while (N) {
        int x = 11;
        int digit_sum = sum_digits(N);
        while (sum_digits(x * N) != digit_sum) {
            ++x;
        }
        std::cout << x << std::endl;
        std::cin >> N;
    }
    return 0;
}