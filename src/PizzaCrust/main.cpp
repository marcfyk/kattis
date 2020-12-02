#include <iostream>
#include <cmath>


float pi = 2 * std::acos(0);

float area(int r) {
    return 2 * pi * powf(r, 2);
}

int main() {
    int C, R;
    std::cin >> C >> R;
    std::cout.precision(6);
    std::cout << std::fixed << (area(R - C) / area(C)) * 100;
    return 0;
}