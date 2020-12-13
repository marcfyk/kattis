#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> canisters(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> canisters[i];
    }


    std::sort(canisters.begin(), canisters.end(), [](int x, int y) { return x < y; });

    double f = 1;
    for (int i = 1; i <= n; ++i) {
        double current_f = double(canisters[i - 1]) / double(i);
        if (current_f > 1) {
            f = current_f;
            break;
        } else {
            f = std::min(f, current_f);
        }
    }

    if (f > 1) {
        std::cout << "impossible";
    } else {
        std::cout.precision(6);
        std::cout << f;
    }

    return 0;
}