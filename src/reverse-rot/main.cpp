#include <iostream>

int main() {
    int N;
    std::cin >> N;
    std::string line;
    std::string code = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";
    std::string out;
    while (N) {
        std::cin >> line;
        for (int i = line.size() - 1; i >= 0; --i) {
            int index;
            if (line[i] == '_') {
                index = 26;
            } else if (line[i] == '.') {
                index = 27;
            } else {
                index = line[i] - 'A';
            }
            out += code[(index + N) % code.length()];
        }
        out += '\n';
        std::cin >> N;
    }
    std::cout << out;
    return 0;
}