#include <iostream>

int main() {
    int N, M;
    std::cin >> N >> M;
    int diff = std::abs(M - N);
    if (N < M) {
        std::cout << "Dr. Chaz will have " << diff << " piece" << (diff == 1 ? "" : "s") << " of chicken left over!";
    } else {
        std::cout << "Dr. Chaz needs " << diff << " more piece" << (diff == 1 ? "" : "s") << " of chicken!";
    }
    return 0;
}