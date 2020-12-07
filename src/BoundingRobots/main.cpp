#include <iostream>
#include <string>

int main() {
    int w, l;
    std::cin >> w >> l;
    std::string out;
    while (w || l) {
        int n;
        std::cin >> n;
        int x = 0;
        int y = 0;
        int x_actual = 0;
        int y_actual = 0;
        for (int i = 0; i < n; ++i) {
            char direction;
            int magnitude;
            std::cin >> direction >> magnitude;
            switch (direction) {
            case 'u':
                y += magnitude;
                y_actual = std::min(y_actual + magnitude, l - 1);
                break;
            case 'r':
                x += magnitude;
                x_actual = std::min(x_actual + magnitude, w - 1);
                break;
            case 'l':
                x -= magnitude;
                x_actual = std::max(x_actual - magnitude, 0);
                break;
            case 'd':
                y -= magnitude;
                y_actual = std::max(y_actual - magnitude, 0);
                break;
            }
        }
        out += "Robot thinks " + std::to_string(x) + " " + std::to_string(y) + '\n';
        out += "Actually at " + std::to_string(x_actual) + " " + std::to_string(y_actual) + '\n';
        out += '\n';
        std::cin >> w >> l;
    }
    std::cout << out;
    return 0;
}