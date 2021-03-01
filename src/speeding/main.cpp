#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> t(n), d(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> t[i] >> d[i];
    }
    int max_speed = 0;
    for (int i = 1; i < n; ++i) {
        int delta_t = t[i] - t[i - 1];
        int delta_d = d[i] - d[i - 1];
        int speed = delta_d / delta_t;
        max_speed = std::max(max_speed, speed);
    }
    std::cout << max_speed;
    return 0;
}
