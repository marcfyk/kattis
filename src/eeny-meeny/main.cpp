#include <algorithm>
#include <iostream>
#include <string>
#include <queue>

int main() {
    std::string line;
    std::getline(std::cin, line);
    int n;
    std::cin >> n;
    std::string name;
    std::queue<std::string> names, ordered_names;
    for (int i = 0; i < n; ++i) {
        std::cin >> name;
        names.push(name);
    }

    int team_one = n % 2 == 0 ? n / 2 : n / 2 + 1;
    int team_two = n - team_one;
    int wc = std::count(line.begin(), line.end(), ' ') + 1;
    for (int i = 0; i < n; ++i) {
        for (int i = 0; i < wc - 1; ++i) {
            names.push(names.front());
            names.pop();
        }

        std::string selected = names.front();
        names.pop();
        ordered_names.push(selected);
    }

    std::vector<std::string> A, B;
    while (not ordered_names.empty()) {
        std::string next = ordered_names.front();
        if (A.size() > B.size()) {
            B.push_back(next);
        } else {
            A.push_back(next);
        }
        ordered_names.pop();
    }

    std::string out;
    out += std::to_string(team_one) + '\n';
    for (const std::string x : A) {
        out += x + '\n';
    }
    out += std::to_string(team_two) + '\n';
    for (const std::string x : B) {
        out += x + '\n';
    }
    std::cout << out;

    return 0;
}