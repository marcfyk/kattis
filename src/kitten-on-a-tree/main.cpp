#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <unordered_map>

std::vector<int> format_line(const std::string &line) {
    std::stringstream stream(line);
    std::vector<int> vector;
    std::string token;
    while (stream >> token) {
        vector.push_back(std::stoi(token));
    }
    return vector;
}

int main() {
    int K;
    std::cin >> K;
    std::cin.ignore(1, '\n');

    std::vector<std::vector<int>> input;

    std::string line;
    std::getline(std::cin, line);
    while (line != "-1") {
        std::vector<int> nums = format_line(line);
        input.push_back(nums);
        std::getline(std::cin, line);
    }

    std::unordered_map<int, int> map;
    for (const std::vector<int> &nums : input) {
        int a = nums[0];
        for (int i = 1; i < nums.size(); ++i) {
            int b = nums[i];
            map[b] = a;
        }
    }

    std::vector<int> path;
    path.push_back(K);
    int node = K;
    while (map.count(node)) {
        path.push_back(map[node]);
        node = map[node];
    }

    for (const int n : path) {
        std::cout << n << " ";
    }

    return 0;
}