#include <iostream>
#include <vector>
#include <sstream>
#include <iomanip>
#include <cmath>

class Pair {
public:
    int x, y;
    Pair() : x(-1), y(-1) {}
    Pair(int x, int y) : x(x), y(y) {}
    double get_max() const;
};

double Pair::get_max() const {
    int sum_xy = x + y;
    double h = (sum_xy - sqrt(pow(sum_xy, 2) - 3 * x * y)) / 6;
    double x_val = x - 2 * h;
    double y_val = y - 2 * h;
    return x_val * y_val * h;
}

int main() {
    int T;
    std::cin >> T;
    std::vector<Pair> pairs(T);
    for (int i = 0; i < T; ++i) {
        int X, Y;
        std::cin >> X >> Y;
        pairs[i] = Pair(X, Y);
    }

    std::stringstream buffer;
    buffer << std::setprecision(6) << std::fixed;
    for (const Pair &p : pairs) {
        buffer << p.get_max() << '\n';
    }
    std::cout << buffer.str();

    return 0;
}