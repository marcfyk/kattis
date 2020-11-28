#include <iostream>

int main() {
    std::string a1, a2;
    std::cin >> a1 >> a2;
    std::cout << (a1.length() < a2.length() ? "no" : "go");
    return 0;
}