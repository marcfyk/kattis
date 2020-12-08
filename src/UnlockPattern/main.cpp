#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

class Coordinate {
public:
    int x, y, step;
    Coordinate() : x(-1), y(-1), step(-1) {};
    Coordinate(int x, int y, int step) : x(x), y(y), step(step) {};
};

double distance(const Coordinate &c1, const Coordinate &c2) {
    int x_delta = abs(c1.x - c2.x);
    int y_delta = abs(c1.y - c2.y);
    return sqrt(pow(x_delta, 2) + pow(y_delta, 2));
}

int main() {
    std::vector<Coordinate> sequence;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            int step;
            std::cin >> step;
            sequence.push_back(Coordinate(i, j, step));
        }
    }
    std::sort(sequence.begin(), sequence.end(), [](Coordinate c1, Coordinate c2) { return c1.step < c2.step; });

    double dist = 0;
    for (int i = 0; i < sequence.size() - 1; ++i) {
        dist += distance(sequence[i], sequence[i + 1]);
    }

    std::cout.precision(6);
    std::cout << std::fixed << dist;

    return 0;
}