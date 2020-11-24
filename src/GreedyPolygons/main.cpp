#include <iostream>
#include <cmath>

const double pi = 2 * std::acos(0);

double polgon_area(int n, int l) {
    return l * l * n / (4 * std::tan(pi / n));
}

double expansion(int n, int l, int d, int g) {
    return g * g * d * d * pi + n * l * d * g;
}

int main() {
    int N;
    std::cin >> N;

    for (int i = 0; i < N; ++i) {
        int n, l, d, g;
        std::cin >> n >> l >> d >> g;

        std::cout.precision(6);
        std::cout << std::fixed <<polgon_area(n, l) + expansion(n, l, d, g) << std::endl;
    }

    return 0;
}