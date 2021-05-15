#include <iostream>

int main() {
    int x, y;
    std::cin >> x >> y;
    std::string out;
    while (x || y) {
        if (x + y == 13) {
            out += "Never speak again.\n";
        } else if (x > y) {
            out += "To the convention.\n";
        } else if (x < y) {
            out += "Left beehind.\n";
        } else {
            out += "Undecided.\n";
        }
        std::cin >> x >> y;
    }
    std::cout << out;
    return 0;
}