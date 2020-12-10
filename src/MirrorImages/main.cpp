#include <iostream>
#include <string>
#include <vector>

int main() {
    int T;
    std::cin >> T;
    std::string out;
    for (int i = 1; i <= T; ++i) {
        int R, C;
        std::cin >> R >> C;
        out += "Test " + std::to_string(i) + '\n'; 
        std::vector<std::string> table(R);
        for (int i = 0; i < R; ++i) {
            std::cin >> table[i];
        }
        for (int i = R - 1; i >= 0; --i) {
            for (int j = C - 1; j >= 0; --j) {
                out += table[i][j];
            }
            out += '\n';
        }
        out += '\n';
    }
    std::cout << out;
    return 0;
}