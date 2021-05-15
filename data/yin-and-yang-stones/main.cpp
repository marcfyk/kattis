#include <iostream>
#include <algorithm>

int main() {
    std::string line;
    std::cin >> line;
    int w = std::count(line.begin(), line.end(), 'W');
    int b = std::count(line.begin(), line.end(), 'B');
    std::cout << (w == b);
    return 0;
}