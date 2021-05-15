#include <iostream>
#include <cmath>

int main() {
    double x1, y1, x2, y2, p;
    std::cin >> x1;
    while (x1) {
        std::cin >> y1 >> x2 >> y2 >> p;
        double distance = std::pow(std::pow(std::abs(x1 - x2), p) + std::pow(std::abs(y1 - y2), p), 1 / p);
        std::cout.precision(4);
        std::cout << std::fixed << distance << std::endl;
        std::cin >> x1;
    }
    return 0;
}