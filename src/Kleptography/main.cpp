#include <iostream>
#include <string>

int main() {

    int n, m;
    std::cin >> n >> m;
    std::cin.ignore(1, '\n');
    std::string plaintext, cyphertext;
    std::cin >> plaintext >> cyphertext;
    std::string out = std::string(m - n, ' ') + plaintext;

    auto to_char = [](int i) {return (i + 26) % 26 + 'a';};
    auto to_int = [](char c) {return c - 'a';};

    for (int i = m - n - 1; i >= 0; --i) {
        out[i] = (char) to_char(to_int(cyphertext[i + n]) - to_int(out[i + n]));
    }

    std::cout << out;

    return 0;
}