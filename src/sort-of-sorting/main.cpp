#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<std::vector<std::string>> data;
    while (n) {
        std::vector<std::string> names(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> names[i];
        }
        std::stable_sort(names.begin(), names.end(), [](const auto &a, const auto &b) {
            if (a[0] < b[0]) {
                return true;
            } else if (a[0] > b[0]) {
                return false;
            } else {
                return a[1] < b[1];
            }
        });
        data.push_back(names);
        std::cin >> n;
    }

    for (const auto &names : data) {
        for (const auto &name : names) {
            std::cout << name << std::endl;
        }
        std::cout << std::endl;
    }
}