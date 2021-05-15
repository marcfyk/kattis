#include <iostream>
#include <string>
#include <set>
#include <cctype>


int main() {
    int N;
    std::cin >> N;
    std::cin.ignore(1, '\n');
    for (int i = 0; i < N; ++i) {
        std::string line;
        std::getline(std::cin, line);
        std::set<char> letters;
        for (char i = 'a'; i <= 'z'; ++i) {
            letters.insert(i);
        }
        for (char c : line) {
            if (c >= 'A' && c <= 'z') {
                letters.erase(tolower(c));
            }
        }
        if (letters.size()) {
            std::string out = "missing ";
            for (char c : letters) {
                out += c;
            }
            std::cout << out << std::endl;
        } else {
            std::cout << "pangram" << std::endl;
        }
    }
    return 0;
}