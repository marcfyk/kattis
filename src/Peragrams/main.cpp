#include <iostream>
#include <map>
#include <vector>

int main() {
    std::string line;
    std::cin >> line;
    std::map<char, int> counts;
    for (char &c : line) {
        ++counts[c];
    }

    std::vector<int> odd_counts;
    for (const auto &[k, v] : counts) {
        if (v % 2 == 1) {
            odd_counts.push_back(v);
        }
    }

    int count = 0;
    int size = line.size();
    int odd_size = odd_counts.size();

    while (true) {

        if (size % 2 == 0 && odd_size == 0) {
            break;
        }

        if (size % 2 == 1 && odd_size == 1) {
            break;
        }

        ++count;
        --odd_size;
        --size;
    }

    std::cout << count;



    return 0;
}