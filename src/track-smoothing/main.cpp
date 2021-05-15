#include <iostream>
#include <vector>
#include <cmath>

const double pi = std::acos(-1);

class Point {
public:
    int x, y;
    Point() : x(-1), y(-1) {}
    Point(int x, int y) : x(x), y(y) {}
};

double get_distance(const Point &p1, const Point &p2) {
    double x_diff = p1.x - p2.x;
    double y_diff = p1.y - p2.y;
    return sqrt(pow(x_diff, 2) + pow(y_diff, 2));
}

double get_total_distance(const std::vector<Point> &points) {
    if (!points.size()) {
        return 0;
    }
    double distance = 0;
    for (int i = 0; i < points.size() - 1; ++i) {
        distance += get_distance(points[i], points[i + 1]);
    }
    distance += get_distance(points.front(), points.back());
    return distance;
}

int main() {
    int t;
    std::cin >> t;

    std::vector<std::vector<Point>> point_grps(t);
    std::vector<int> radii(t);
    for (int i = 0; i < t; ++i) {
        int r, n;
        std::cin >> r >> n;
        std::vector<Point> p(n);
        for (int j = 0; j < n; ++j) {
            int x, y;
            std::cin >> x >> y;
            p[j] = Point(x, y);
        }
        point_grps[i] = p;
        radii[i] = r;
    }

    std::string out;

    for (int i = 0; i < t; ++i) {
        const double radius = radii[i];
        const double distance = get_total_distance(point_grps[i]); 
        const double circle = 2 * pi * radius;
        if (distance < circle) {
            out += "Not possible\n";
        } else {
            double x = (distance - circle) / distance;
            out += std::to_string(x) + '\n';
        }
    }

    std::cout.precision(5);
    std::cout << std::fixed << out;

    return 0;
}