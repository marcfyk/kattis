#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;
    std::vector<int> bricks;
    for (int i = 0; i < N; ++i) {
        int b;
        std::cin >> b;
        bricks.push_back(b);
    }

    int prev_brick = -1;
    int towers = 0;
    for (const int b : bricks) {
        if (prev_brick == -1 || prev_brick < b) {
            ++towers;
        }
        prev_brick = b;
    }


    std::cout << towers;

    return 0;
}