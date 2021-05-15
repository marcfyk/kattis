#include <iostream>
#include <string>
#include <vector>

class Point {
public:
    int x, y;
    Point() : x(-1), y(-1) {}
    Point(int x, int y) : x(x), y(y) {}
    std::string to_string();
};

std::string Point::to_string() {
    return "<" + std::to_string(x) + ", " + std::to_string(y) + ">";
}

class Frame {
public:
    Point topleft, topright, botleft, botright;
    Frame() {};
    Frame(int x, int y, int size);
    int count_hits(std::vector<std::vector<char>> &area);
    void update_area(std::vector<std::vector<char>> &area);
    std::string to_string();
};

Frame::Frame(int x, int y, int size) {
    topleft = Point(x, y);
    botright = Point(x + size - 1, y + size - 1);
}

int Frame::count_hits(std::vector<std::vector<char>> &area) {
    int count = 0;
    for (int i = topleft.x + 1; i < botright.x; ++i) {
        for (int j = topleft.y + 1; j < botright.y; ++j) {
            if (area[i][j] == '*') {
                ++count;
            }
        }
    }
    return count;
}

void Frame::update_area(std::vector<std::vector<char>> &area) {
    for (int i = topleft.x + 1; i < botright.x; ++i) {
        area[i][topleft.y] = '|';
        area[i][botright.y] = '|';
    }
    for (int j = topleft.y + 1; j < botright.y; ++j) {
        area[topleft.x][j] = '-';
        area[botright.x][j] = '-';
    }
    area[topleft.x][topleft.y] = '+';
    area[botright.x][botright.y] = '+';
    area[topleft.x][botright.y] = '+';
    area[botright.x][topleft.y] = '+';
}


std::string Frame::to_string() {
    std::string str;
    str += "topleft: " + topleft.to_string() + ", ";
    str += "botright: " + botright.to_string();
    return str;
}

void print_area(std::vector<std::vector<char>> &area, int R, int S) {
    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < S; ++j) {
            std::cout << area[i][j];
        }
        std::cout << std::endl;
    }
}


int main() {
    int R, S, K;
    std::cin >> R >> S >> K;
    std::cin.ignore(1, '\n');
    std::string line;
    std::vector<std::vector<char>> area(R, std::vector<char>(S));

    for (int i = 0; i < R; ++i) {
        std::getline(std::cin, line);
        for (int j = 0; j < S; ++j) {
            area[i][j] = line[j];
        }
    }

    int max_hits = 0;
    Point p;
    for (int i = 0; i < R - K + 1; ++i) {
        for (int j = 0; j < S - K + 1; ++j) {
            int hits = Frame(i, j, K).count_hits(area);
            if (hits > max_hits) {
                max_hits = hits;
                p = Point(i, j);
            }
        }
    }

    Frame f(p.x, p.y, K);
    f.update_area(area);
    std::cout << max_hits << std::endl;
    print_area(area, R, S);
    

    return 0;
}