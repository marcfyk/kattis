#include <iostream>

int main() {
    std::string line;
    std::cin >> line;
    int mid = line.length() / 2;
    std::string out(mid, ' ');

    for (int i = 0; i < line.length(); ++i) {
        line[i] -= 'A';
    }

    int sum = 0;
    sum = 0;
    for (int i = 0; i < mid; ++i) {
        sum += line[i];
    }
    for (int i = 0; i < mid; ++i) {
        line[i] = ((line[i]) + sum) % 26;
    }

    sum = 0;
    for (int i = mid; i < line.length(); ++i) {
        sum += line[i];
    }
    for (int i = mid; i < line.length(); ++i) {
        line[i] = ((line[i]) + sum) % 26;
    }

    for (int i = 0; i < mid; ++i) {
        out[i] = (line[i] + line[i + mid]) % 26 + 'A';
    }

    std::cout << out;


    return 0;
}