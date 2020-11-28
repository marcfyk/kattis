#include <iostream>

int main() {
    int T;
    std::cin >> T;
    for (int i = 0; i < T; ++i) {
        int N;
        std::cin >> N;
        std::cout << (N % 400 == 0 ? N / 400 : N / 400 + 1) << std::endl;
    }
    return 0;
}