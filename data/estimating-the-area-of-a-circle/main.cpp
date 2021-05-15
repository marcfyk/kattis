#include <iostream>
#include <cmath>

const double pi = 2 * std::acos(0);

int main() {
    float r, m, c;
    std::cin >> r >> m >> c;
    while (r != 0 && m != 0 && c != 0) {
        float real_value = pi * r * r;
        float approximation = 4 * c / m * r * r;
        std::cout.precision(5);
        std::cout << std::fixed << real_value << " " << approximation << std::endl;
        std::cin >> r >> m >> c;
    }
    
    return 0;
}