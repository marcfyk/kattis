#include <algorithm>
#include <iostream>
#include <string>
#include <map>
#include <vector>

int main() {
    int n;
    std::string line, token;
    std::cin >> n;
    std::cin.ignore(1, '\n');
    std::vector<std::map<std::string, int>> total_data;
    while (n) {
        std::map<std::string, int> data;
        for (int i = 0; i < n; ++i) {
            std::getline(std::cin, line);
            reverse(line.begin(), line.end());
            token = line.substr(0, line.find(' '));
            reverse(token.begin(), token.end());
            std::transform(token.begin(), token.end(), token.begin(), ::tolower);
            ++data[token];
        }
        total_data.push_back(data);
        std::cin >> n;
        std::cin.ignore(1, '\n');
    }

    std::string out;

    for (int i = 1; i <= total_data.size(); ++i) {
        out += "List " + std::to_string(i) + ":\n";
        for (const auto &[animal, count] : total_data[i - 1]) {
            out += animal + " | " + std::to_string(count) + '\n';
        }
    }

    std::cout << out;

    return 0;
}