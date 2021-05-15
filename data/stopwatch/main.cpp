#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;
    std::vector<int> ts(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> ts[i];
    }
    if (N % 2) {
        std::cout << "still running" << std::endl;
    } else {
        int total_time = 0;
        for (int i = 0; i < N; i += 2) {
            total_time += ts[i + 1] - ts[i];
        }
        std::cout << total_time << std::endl;
    }
    return 0;
}
