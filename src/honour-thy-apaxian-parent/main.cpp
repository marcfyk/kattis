#include <iostream>

bool is_vowel(char c) {
    switch (c) {
        case 'a':
        case 'i':
        case 'o':
        case 'u':
            return true;
        default:
            return false;
    }
}

int main() {
    std::string Y, P, out;
    std::cin >> Y >> P;

    int n = Y.length();
    if (Y[n - 1] == 'e') {
        out = Y + 'x' + P;
    } else if (is_vowel(Y[n - 1])) {
        Y[n - 1] = 'e';
        out = Y + 'x' + P;
    } else if (Y[n - 2] == 'e' && Y[n - 1] == 'x') {
        out = Y + P;
    } else {
        out = Y + "ex" + P;
    }

    std::cout << out;

}