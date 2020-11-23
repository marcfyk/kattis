#include <iostream>

int main() {
    int P;
    std::cin >> P;


    for (int i = 0; i < P; ++i) {
        int K, N;
        std::cin >> K >> N;
        int s1 = 0.5 * N * (1 + N);
        int s2 = N * N;
        int s3 = N + N * N;
        std::cout << K << " " << s1 << " " << s2 << " " << s3 << std::endl;
    }

    return 0;
}