#include <iostream>
#include <string>
#include <algorithm>
#include <set>

int main() {
    std::set<int> numbers;
    int n;
    std::cin >> n;

    int max = 1;

    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        numbers.insert(num);
        if (num > max) {
            max = num;
        }
    }

    if (numbers.size() == max) {
        std::cout << "good job";
    } else {
        std::string out;
        for (int i = 1; i < max; ++i) {
            if (!numbers.count(i)) {
                out += std::to_string(i) + '\n';
            }
        }
        std::cout << out;
    }

    return 0;
}