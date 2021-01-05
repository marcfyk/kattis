#include <iostream>
#include <cmath>

int main() {
    double pi = std::acos(-1);
    int a, b, s, m, n;
    std::cin >> a >> b >> s >> m >> n;
    std::cout.precision(2);
    while (a + b + s + m + n) {
        double delta_x = m * a;
        double delta_y = n * b;
        double theta = std::atan(delta_y / delta_x) * 180 / pi;
        double v = std::sqrt(std::pow(delta_x, 2) + std::pow(delta_y, 2)) / s;
        std::cout << std::fixed << theta << ' ' << v << '\n';
        std::cin >> a >> b >> s >> m >> n;
    }
    return 0;
}