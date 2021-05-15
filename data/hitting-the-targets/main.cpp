#include <iostream>
#include <cmath>
#include <vector>

class Point {
public:
    int x, y;
    Point() : x(-1), y(-1) {}
    Point(int x, int y) : x(x), y(y) {};
    std::string to_string() const;
    static double get_distance(const Point &p1, const Point &p2);
};

double Point::get_distance(const Point &p1, const Point &p2) {
    int x_diff = abs(p1.x - p2.x);
    int y_diff = abs(p1.y - p2.y);
    return sqrt(pow(x_diff, 2) + pow(y_diff, 2));
}

std::string Point::to_string() const {
    return "<" + std::to_string(x) + ", " + std::to_string(y) + ">";
}

class Rectangle {
public:
    Point botleft, topright;
    Rectangle() : botleft(Point()), topright(Point()) {};
    Rectangle(int x1, int y1, int x2, int y2) : botleft(Point(x1, y1)), topright(Point(x2, y2)) {};
    bool contains(const Point &p) const;
    std::string to_string() const;
};

class Circle {
public:
    int radius;
    Point center;
    Circle() : radius(-1), center(Point()){};
    Circle(int x, int y, int r) : center(Point(x, y)), radius(r) {};
    bool contains(const Point &p) const;
    std::string to_string() const;
};

bool Rectangle::contains(const Point &p) const {
    bool check_x = botleft.x <= p.x && p.x <= topright.x;
    bool check_y = botleft.y <= p.y && p.y <= topright.y;
    return check_x && check_y;
}

bool Circle::contains(const Point &p) const {
    return Point::get_distance(p, center) <= radius;
}

std::string Rectangle::to_string() const {
    return "Rectangle: " + botleft.to_string() + " " + topright.to_string();
}

std::string Circle::to_string() const {
    return "Circle: " + center.to_string() + " " + std::to_string(radius);
}

int main() {
    int m;
    std::cin >> m;

    std::vector<Rectangle> rectangles;
    std::vector<Circle> circles;
    std::vector<Point> points;

    for (int i = 0; i < m; ++i) {
        std::string shape_type;
        std::cin >> shape_type;
        if (shape_type == "rectangle") {
            int x1, y1, x2, y2;
            std::cin >> x1 >> y1 >> x2 >> y2;
            rectangles.push_back(Rectangle(x1, y1, x2, y2));
        } else if (shape_type == "circle") {
            int x, y, r;
            std::cin >> x >> y >> r;
            circles.push_back(Circle(x, y, r));
        }
    }


    int n;
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        int x, y;
        std::cin >> x >> y;
        points.push_back(Point(x, y));
    }

    std::string out;
    for (const Point &p : points) {
        int count = 0;
        for (const Rectangle r : rectangles) {
            if (r.contains(p)) {
                ++count;
            }
        }
        for (const Circle c : circles) {
            if (c.contains(p)) {
                ++count;
            }
        }
        out += std::to_string(count) + '\n';
    }

    std::cout << out;

    return 0;
}