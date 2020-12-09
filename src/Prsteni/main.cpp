#include <iostream>
#include <string>
#include <vector>

int get_gcd(int a, int b) {
    if (a == 0) {
        return b;
    } else if (b == 0) {
        return a;
    } else {
        int max = std::max(a, b);
        int min = std::min(a, b);
        return get_gcd(min, max % min);
    }
}

int main() {
    int N;
    std::cin >> N;
    std::vector<int> nums(N);    
    for (int i = 0; i < N; ++i) {
        std::cin >> nums[i];
    }
    int base = nums[0];
    std::string out;
    for (int i = 1; i < N; ++i) {
        int gcd = get_gcd(base, nums[i]);
        out += std::to_string(base / gcd) + '/' + std::to_string(nums[i] / gcd) + '\n';
    }
    std::cout << out;
    return 0;
}