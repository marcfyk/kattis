#include <iostream>
#include <string>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }
    std::string out;
    for (int i = n - 1; i >= 0; --i) {
        out += std::to_string(nums[i]) + '\n';
    }
    std::cout << out;
    return 0;
}
