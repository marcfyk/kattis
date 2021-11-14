#include <iostream>

int main() {
    int height, base;
    std::cin >> height >> base;
    float area = height * base * 0.5;
    std::cout << area;
    return 0;
}