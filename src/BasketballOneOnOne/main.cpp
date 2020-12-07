#include <iostream>

int main() {
    std::string line;
    std::cin >> line;
    std::cout << line[line.size() - 2];
    return 0;
}