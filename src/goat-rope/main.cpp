#include <iostream>
#include <cmath>

int main() {
    int x, y, x1, y1, x2, y2;
    std::cin >> x >> y >> x1 >> y1 >> x2 >> y2;
    std::cout.precision(3);

    int x_max = std::max(x1, x2);
    int x_min = std::min(x1, x2);
    int y_max = std::max(y1, y2);
    int y_min = std::min(y1, y2);
    int x1_delta = abs(x - x1);
    int x2_delta = abs(x - x2);
    int y1_delta = abs(y - y1);
    int y2_delta = abs(y - y2);
    int x_nearest = x1_delta < x2_delta ? x1_delta : x2_delta;
    int y_nearest = y1_delta < y2_delta ? y1_delta : y2_delta;

    if (x_min < x && x < x_max) {
        x_nearest = x;
        std::cout << std::fixed << y_nearest;
    } else if (y_min < y && y < y_max) {
        y_nearest = y;
        std::cout << std::fixed << x_nearest;
    } else {
        std::cout << std::fixed << sqrt(pow(x_nearest, 2) + pow(y_nearest, 2));
    }
    return 0;
}