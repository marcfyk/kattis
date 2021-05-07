#include <iostream>
#include <vector>

int main() {
    int N, P, S;
    std::cin >> N >> P >> S;
    int m, id;
    for (int i = 0; i < S; ++i) {
        std::cin >> m;
        bool flag = false;
        for (int j = 0; j < m; ++j) {
            std::cin >> id;
            if (id == P) {
                flag = true;
            }
        }
        std::cout << (flag ? "KEEP" : "REMOVE") << std::endl;

    }
    return 0;
}
