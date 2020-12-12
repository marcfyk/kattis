#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

bool validate(const std::string &line) {
    int w = std::count(line.begin(), line.end(), 'W');
    int b = std::count(line.begin(), line.end(), 'B');
    return w == b && line.find("WWW") == std::string::npos && line.find("BBB") == std::string::npos;
}

int main() {
    int n;
    std::cin >> n;
    std::cin.ignore(1, '\n');

    std::vector<std::string> rows(n), columns(n);
    
    for (int i = 0; i < n; ++i) {
        std::getline(std::cin, rows[i], '\n');
    }

    for (int i = 0; i < n; ++i) {
        columns[i] = std::string(n, ' ');
        for (int j = 0; j < n; ++j) {
            columns[i][j] = rows[j][i];
        }
    }

    bool is_valid = true;
    for (int i = 0; i < n; ++i) {
        is_valid = is_valid && validate(rows[i]) && validate(columns[i]);
    }

    std::cout << is_valid;

    return 0;
}