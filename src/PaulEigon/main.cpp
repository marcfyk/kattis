#include <iostream>
#include <cmath>

int main() {
    int N, P, Q;
    std::cin >> N >> P >> Q;
    int round = P + Q;
    int div = round / N;
    if (div % 2 == 0) {
        std::cout << "paul";
    } else {
        std::cout << "opponent";
    }
    return 0;
}