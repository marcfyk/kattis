#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>

std::unordered_set<std::string> intersection(std::unordered_set<std::string> &s1, std::unordered_set<std::string> &s2) {
    if (s1.size() > s2.size()) {
        return intersection(s2, s1);
    }
    std::unordered_set<std::string> out;
    for (const auto &item : s1) {
        if (s2.count(item)) {
            out.insert(item);
        }
    }
    return out;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::vector<std::unordered_set<std::string>> data(n);
    for (auto i = 0; i < n; ++i) {
        std::unordered_set<std::string> set;
        for (auto j = 0; j < m; ++j) {
            std::string item;
            std::cin >> item;
            set.insert(item);
        }
        data[i] = set;
    }

    auto identity = data[0];
    for (auto i = 1; i < n; ++i) {
        identity = intersection(identity, data[i]);
    }

    std::vector<std::string> common_items;
    for (const auto &i : identity) {
        common_items.push_back(i);
    }
    std::sort(common_items.begin(), common_items.end());

    std::cout << common_items.size() <<std::endl;
    for (const auto &e : common_items) {
        std::cout << e << std::endl;
    }
    return 0;
}
