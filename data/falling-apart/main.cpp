#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums;
    for (int i = 0; i < n; ++i) {
        int x;
        std::cin >> x;
        nums.push_back(x);
    }
    std::sort(nums.begin(), nums.end(), [](int x, int y) { return x > y; });
    int A = 0;
    int B = 0;
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            A += nums[i];
        } else {
            B += nums[i];
        }
    }
    std::cout << A << " " << B;
    return 0;
}