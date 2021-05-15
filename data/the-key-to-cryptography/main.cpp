#include <iostream>

int to_index(char a) {
    return a - 'A';
}

char to_char(int index) {
    return index + 'A';
}

int main() {
    std::string cyphertext, secretword;
    std::cin >> cyphertext >> secretword;

    std::string message(cyphertext.size(), ' ');

    for (int i = 0; i < secretword.length(); ++i) {
        message[i] = to_char((26 + to_index(cyphertext[i]) - to_index(secretword[i])) % 26);
    }

    for (int i = secretword.length(); i < cyphertext.size(); ++i) {
        message[i] = to_char((26 + to_index(cyphertext[i]) - to_index(message[i - secretword.length()])) % 26);
    }

    std::cout << message;

    return 0;
}