#include <iostream>
#include <string>

int solve(int h, int t, int count) {
    if (h % 2 == 1 && t == 0) {
        return -1;
    } else {
        int heads = h + t / 2;
        if (heads % 2 == 0 && t % 2 == 0) {
            return count + heads / 2 + t / 2;
        } else {
            return solve(h, t + 1, count + 1);
        }
    }
}

int main() {
    int H, T;
    std::cin >> H >> T;
    std::string out;
    while (H || T) {
        int count = 0;
        int n = solve(H, T, 0);
        out += std::to_string(n) + '\n';
        std::cin >> H >> T;
    }
    std::cout << out;
    return 0;
}