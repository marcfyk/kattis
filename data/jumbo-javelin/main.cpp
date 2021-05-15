#include <iostream>

int main() {
    int N;
    std::cin >> N;
    int sum = 0;
    int n;
    for (int i = 0; i < N; ++i) {
        std::cin >> n;
        sum += n;
    }
    std::cout << (sum - N + 1) << std::endl;
    return 0;
}
