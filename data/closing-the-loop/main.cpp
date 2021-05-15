#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>

void print(std::vector<int> v) {
    for (int i : v) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

int main() {
    int N;
    std::cin >> N;
    std::string out;
    for (int i = 0; i < N; ++i) {
        int S;
        std::cin >> S;
        std::string line;
        std::cin.ignore(1, '\n');
        std::getline(std::cin, line, '\n');
        std::string c;
        std::stringstream stream(line);
        std::vector<int> blue, red;
        while (stream >> c) {
            char color = c[c.size() - 1];
            int n = std::stoi(c.substr(0, c.size() - 1));
            if (color == 'R') {
                red.push_back(n);
            } else {
                blue.push_back(n);
            }
        }
        int min_length = std::min(red.size(), blue.size());
        std::sort(red.begin(), red.end(), [](int x, int y) { return x > y; });
        std::sort(blue.begin(), blue.end(), [](int x, int y) { return x > y; });
        int sum = 0;
        for (int i = 0; i < min_length; ++i) {
            sum += red[i] + blue[i] - 2;
        }
        out += "Case #" + std::to_string(i + 1) + ": " + std::to_string(sum) + '\n';
    }
    std::cout << out;
    return 0;
}