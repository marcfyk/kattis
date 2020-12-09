#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

int main() {
    std::vector<int> nums(9);
    std::unordered_map<int, int> composite;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        std::cin >> nums[i];
        sum += nums[i];
    }
    int over = sum - 100;
    int a, b;
    for (const int i : nums) {
        if (i >= over || 2 * i == over) {
            continue;
        }
        composite[i] = over - i;
        if (composite.count(over - i)) {
            a = i;
            b = over - i;
        }
    }

    std::string out;
    for (const int i : nums) {
        if (i == a || i == b) {
            continue;
        }
        out += std::to_string(i) + '\n';
    }
    std::cout << out;

    return 0;
}