#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> king_indexes;

    for (int i = 0; i < n; ++i) {
        int g;
        std::cin >> g;
        std::vector<int> indexes;
        for (int j = 0; j < g; ++j) {
            int index;
            std::cin >> index;
            indexes.push_back(index);
        }

        for (int j = 1; j < g - 1; ++j) {
            if (indexes[j - 1] < indexes[j + 1] && (indexes[j + 1] < indexes[j] || indexes[j - 1] > indexes[j])) {
                king_indexes.push_back(j + 1);
                break;
            }
        }
    }

    std::string out;
    for (int i : king_indexes) {
        out += std::to_string(i);
        out += '\n';
    }
    std::cout << out;

    return 0;
}