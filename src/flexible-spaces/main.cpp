#include <iostream>
#include <vector>

int main() {
    int W, P;
    std::cin >> W >> P;
    std::vector<int> partitions(P);
    std::vector<bool> widths(W + 1);
    widths[W] = true;
    for (int i = 0; i < P; ++i) {
        std::cin >> partitions[i];
        widths[partitions[i]] = true;
        widths[W - partitions[i]] = true;
    }

    for (int i = 0; i < P; ++i) {
        for (int j = i + 1; j < P; ++j) {
            widths[partitions[j] - partitions[i]] = true;
        }
    }

    std::vector<int> spaces;
    for (int i = 0; i <= W; ++i) {
        if (widths[i]) {
            spaces.push_back(i);
        }
    }

    std::string out;
    for (int i = 0; i < spaces.size() - 1; ++i) {
        out += std::to_string(spaces[i]) + " ";
    }
    if (spaces.size()) {
        out += std::to_string(spaces[spaces.size() - 1]) + '\n';
    }

    std::cout << out;

    return 0;
}