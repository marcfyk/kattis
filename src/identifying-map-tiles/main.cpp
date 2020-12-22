#include <iostream>
#include <cmath>

int main() {
    std::string line;
    std::cin >> line;
    int n = line.size();
    int x = 0;
    int y = 0;
    for (int i = 0; i < n; ++i) {
        char digit = line[i];
        switch (digit) {
        case '1':
            x += pow(2, n - i - 1);
            break;
        case '2':
            y += pow(2, n - i - 1);
            break;
        case '3':
            x += pow(2, n - i - 1);
            y += pow(2, n - i - 1);
            break;
        default:
            break;
        }
    }
    std::cout << n << " " << x << " " << y;
    return 0;
}