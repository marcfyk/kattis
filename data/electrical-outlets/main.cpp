#include <iostream>


int main() {
    int N;
    std::cin >> N;

    for (int i = 0; i < N; ++i) {
        int K;
        std::cin >> K;

        int out = 0;

        for (int i = 0; i < K; ++i) {
            int O;
            std::cin >> O;
            out += O;
        }

        std::cout << out - K + 1 << "\n";
        
    }

    return 0;
}