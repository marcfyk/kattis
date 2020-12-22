#include <iostream>
#include <vector>
#include <string>

void decode(const std::string &message, std::string &out) {
    for (int i = 0; i < message.length(); i += 2) {
        char c = message[i];
        int count = message[i + 1] - '0';
        for (int j = 0; j < count; ++j) {
            out += c;
        }
    }
}

void encode(const std::string &message, std::string &out) {
    if (!message.length()) {
        return;
    }
    std::vector<char> chars;
    std::vector<int> counts;
    char prev = message[0];
    chars.push_back(prev);
    counts.push_back(0);
    for (const char c : message) {
        if (c == prev) {
            counts[counts.size() - 1]++;
        } else {
            prev = c;
            chars.push_back(prev);
            counts.push_back(1);
        }
    }
    for (int i = 0; i < chars.size(); ++i) {
        out += chars[i] + std::to_string(counts[i]);
    }
}


int main() {

    char action;
    std::string message, out;
    std::cin >> action >> message;

    if (action == 'E') {
        encode(message, out);
    } else if (action == 'D') {
        decode(message, out);
    }

    std::cout << out;

    return 0;
}