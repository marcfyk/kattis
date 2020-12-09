#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

void get_words(const std::string &line, std::vector<std::string> &words) {
    std::vector<int> indexes;
    for (int i = 0; i < line.length(); ++i) {
        if (line[i] == '#') {
            indexes.push_back(i);
        }
    }
    indexes.push_back(line.length());
    int startindex = 0;
    for (const int i : indexes) {
        int length = i - startindex;
        if (length >= 2) {
            words.push_back(line.substr(startindex, length));
        }
        startindex = i + 1;
    }
}

int main() {
    int R, C;
    std::cin >> R >> C;
    std::cin.ignore(1, '\n');
    std::vector<std::string> crossword(R);
    for (int i = 0; i < R; ++i) {
        std::getline(std::cin, crossword[i]);
    }

    std::vector<std::string> words;

    for (int i = 0; i < R; ++i) {
        get_words(crossword[i], words);
    }
    for (int i = 0; i < C; ++i) {
        std::string line(R, ' ');
        for (int j = 0; j < R; ++j) {
            line[j] = crossword[j][i];
        }
        get_words(line, words);
    }
    std::sort(words.begin(), words.end(), [](const std::string &s1, const std::string &s2) { return s1 < s2; });
    std::cout << words[0];
    return 0;
}