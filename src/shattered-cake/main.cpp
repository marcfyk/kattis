#include <iostream>

int main() {
    int W, N;
    std::cin >> W >> N;

    int area = 0;
    for (int i = 0; i < N; ++i) {
        int w, l;
        std::cin >> w >> l;
        area += (w * l);
    }

    std::cout << area / W;

    return 0;
}