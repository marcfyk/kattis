#include <iostream>
#include <vector>
#include <unordered_map>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> temperatures(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> temperatures[i];
    }

    std::unordered_map<int, int> map;

    for (int i = 0; i < n - 2; ++i) {
        int x = temperatures[i];
        int y = temperatures[i + 2];
        int max = std::max(x, y);
        if (map.count(max)) {
            continue;
        }
        map[max] = i + 1;
    }

    int d = 1;
    int t = 40;
    for (const auto &[temp, day] : map) {
        if (temp < t) {
            t = temp;
            d = day;
        }
    }

    std::cout << d << " " << t;

    return 0;
}