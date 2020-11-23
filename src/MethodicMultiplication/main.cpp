#include <iostream>
#include <algorithm>



int main() {
    std::string x, y;
    std::cin >> x >> y;

    int a = std::count(x.begin(), x.end(), 'S');
    int b = std::count(y.begin(), y.end(), 'S');
    int n = a * b;

    if (n == 0) {
        std::cout << "0";
        return 0;
    }

    int length = 1 + 3 * n;
    std::string out(length, '0');

    int start_index = 0;
    int end_index = length - 1;

    for (int i = 0; i < n; ++i) {
        out[start_index++] = 'S';
        out[start_index++] = '(';
        out[end_index--] = ')';
    }

    std::cout << out;

    return 0;
}