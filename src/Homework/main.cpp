#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string range;
    std::cin >> range;
    std::vector<int> semicolon_indexes;
    for (int i = 0; i < range.size(); ++i) {
        if (range[i] == ';') {
            semicolon_indexes.push_back(i);
        }
    }
    std::vector<int> start_indexes;
    std::vector<int> end_indexes;
    start_indexes.push_back(0);
    for (int i = 0; i < semicolon_indexes.size(); ++i) {
        end_indexes.push_back(semicolon_indexes[i]);
        start_indexes.push_back(semicolon_indexes[i] + 1);
    }
    end_indexes.push_back(range.size());
    int sum = 0;
    for (int i = 0; i < semicolon_indexes.size() + 1; ++i) {
        std::string r = range.substr(start_indexes[i], end_indexes[i] - start_indexes[i]);
        int dash = r.find('-');
        if (dash == -1) {
            ++sum;
        } else {
            int low = std::stoi(r.substr(0, dash));
            int high = std::stoi(r.substr(dash + 1, r.size() - dash));
            sum += (high - low + 1);
        }
    }
    std::cout << sum;
    return 0;
}