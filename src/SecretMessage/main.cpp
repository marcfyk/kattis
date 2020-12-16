#include <iostream>
#include <vector>
#include <cmath>

std::string encode(const std::string &message) {
    int L = message.length();
    int M = std::ceil(std::sqrt(L));
    std::vector<std::string> table(M);
    for (std::string &row : table) {
        row = std::string(M, '*');
    }

    int ptr = 0;
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < M; ++j) {
            table[i][j] = message[ptr++];
            if (ptr == L) {
                break;
            }
        }
        if (ptr == L) {
            break;
        }
    }

    std::string encoded_message;
    for (int j = 0; j < M; ++j) {
        for (int i = M - 1; i >= 0; --i) {
            if (table[i][j] != '*') {
                encoded_message += table[i][j];
            }
        }
    }

    return encoded_message;
}

int main() {
    int N;
    std::cin >> N;

    std::vector<std::string> messages(N);

    for (int i = 0; i < N; ++i) {
        std::cin >> messages[i];
    }

    std::string out;
    for (const std::string &message : messages) {
        out += encode(message) + '\n';
    }
    std::cout << out;

    return 0;
}