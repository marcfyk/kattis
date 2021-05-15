#include <iostream>
#include <cmath>

int main() {
    float N;
    std::cin >> N;

    std::cout.precision(5);
    std::cout << std::fixed << powf(N, 1 / N);

    return 0;
}