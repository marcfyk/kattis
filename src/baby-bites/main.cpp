#include <iostream>
#include <string>
#include <vector>

bool is_numbers(const std::string n) {
    for (const char c : n) {
        if (c < '0' or c > '9') {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<std::string> tokens(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> tokens[i];
    }
    bool is_valid = true;
    for (int i = 0; i < n; ++i) {
        if (is_numbers(tokens[i])) {
            int num = std::stoi(tokens[i]);
            if (num != (i + 1)) {
                is_valid = false;
                break;
            }
        } else if (tokens[i] != "mumble") {
            is_valid = false;
            break;
        }
    }
    std::cout << (is_valid ? "makes sense" : "something is fishy");
    return 0;
}