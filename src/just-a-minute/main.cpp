#include <iostream>

int main() {
    int N;
    std::cin >> N;
    int M, S;
    int total_m = 0;
    int total_s = 0;
    for (int i = 0; i < N; ++i) {
        std::cin >> M >> S;
        total_m += M;
        total_s += S;
    }
    double avg = double(total_s) / double(total_m * 60);
    if (avg <= 1) {
        std::cout << "measurement error";
    } else {
        std::cout.precision(7);
        std::cout << std::fixed << avg;
    }
    return 0;
}