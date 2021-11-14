#include <iostream>

const int MAX = 3;
const int MIN = -3;

int main() {
    int n, k;
    std::cin >> n >> k;
    const int remainder = n - k;
    const int max_remainder = remainder * MAX;
    const int min_remainder = remainder * MIN;

    int sum = 0;
    for (int i = 0; i < k; ++i) {
        int score;
        std::cin >> score;
        sum += score;
    }

    float max_score = float(max_remainder + sum) / n;
    float min_score = float(min_remainder + sum) / n;

    std::cout << min_score << " " << max_score;

    return 0;
}