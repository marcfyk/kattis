#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int n;
    std::string out;
    int case_counter = 1;
    while (std::cin >> n) {
        std::vector<int> data(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> data[i];
        }
        const auto [min, max] = std::minmax_element(data.begin(), data.end());
        out += "Case " + std::to_string(case_counter++) + ": ";
        out += std::to_string(*min) + " " + std::to_string(*max) + " " + std::to_string(*max - *min) + '\n';
    }
    std::cout << out;
    return 0;
}