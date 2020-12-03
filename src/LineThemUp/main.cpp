#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;

    std::vector<std::string> names;

    for (int i = 0; i < N; ++i) {
        std::string name;
        std::cin >> name;
        names.push_back(name);
    }

    bool is_increasing = true;
    bool is_decreasing = true;

    for (int i = 1; i < names.size(); ++i) {
        if (names[i - 1] < names[i]) {
            is_decreasing = false;
        } else if (names[i - 1] > names[i]) {
            is_increasing = false;
        }
    }

    if (is_increasing) {
        std::cout << "INCREASING";
    } else if (is_decreasing) {
        std::cout << "DECREASING";
    } else {
        std::cout << "NEITHER";
    }

    return 0;
}