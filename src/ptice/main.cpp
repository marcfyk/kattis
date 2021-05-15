#include <iostream>
#include <string>
#include <array>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;
    std::cin.ignore(1, '\n');
    std::string line;
    std::getline(std::cin, line);

    std::array<char, 3> sequence_adrian{'A', 'B', 'C'};
    std::array<char, 4> sequence_bruno{'B', 'A', 'B', 'C'};
    std::array<char, 6> sequence_goran{'C', 'C', 'A', 'A', 'B', 'B'};

    std::array<int, 3> counts{0, 0, 0};
    std::array<std::string, 3> names{"Adrian", "Bruno", "Goran"};

    for (int i = 0; i < N; ++i) {
        if (line[i] == sequence_adrian[i % sequence_adrian.size()])
            ++counts[0];

        if (line[i] == sequence_bruno[i % sequence_bruno.size()])
            ++counts[1];

        if (line[i] == sequence_goran[i % sequence_goran.size()])
            ++counts[2];
    }

    int score = *std::max_element(counts.begin(), counts.end());
    std::cout << score << std::endl;

    for (int i = 0; i < 3; ++i) {
        if (counts[i] == score) {
            std::cout << names[i] << std::endl;
        }
    }

    return 0;
}
