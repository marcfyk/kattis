#include <iostream>
#include <set>
#include <string>

int get_index(char suite) {
    switch (suite) {
    case 'P':
        return 0;
    case 'K':
        return 1;
    case 'H':
        return 2;
    case 'T':
        return 3;
    default:
        return -1;
    }
}

int main() {
    std::string line;
    std::cin >> line;

    char suites[]{'P', 'K', 'H', 'T'};
    int counts[]{13, 13, 13, 13};
    std::set<int> distinct_numbers[4];

    bool is_valid = true;
    for (int i = 0; i < line.size(); i += 3) {
        char suite = line[i];
        int number = std::stoi(line.substr(i + 1, i + 3));
        int index = get_index(suite);
        if (distinct_numbers[index].count(number)) {
            is_valid = false;
            break;
        }
        distinct_numbers[index].insert(number);
        --counts[index];
    }

    std::string out;
    if (is_valid) {
        for (int count : counts) {
            out += std::to_string(count) + ' ';
        }
    } else {
        out = "GRESKA";
    }

    std::cout << out;

    return 0;
}