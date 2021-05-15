#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<char> answers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> answers[i];
    }

    int score = 0;
    for (int i = 1; i < n; ++i) {
        if (answers[i - 1] == answers[i]) {
            ++score;
        }
    }

    std::cout << score;

    return 0;
}