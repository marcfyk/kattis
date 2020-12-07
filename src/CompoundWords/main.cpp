#include <iostream>
#include <vector>
#include <set>

int main() {
    std::vector<std::string> words;
    std::set<std::string> compounds;
    std::string word;
    while (std::cin >> word) {
        words.push_back(word);
    }

    for (const std::string &word : words) {
        for (const std::string &w : words) {
            if (w != word) {
                compounds.insert(w + word);
                compounds.insert(word + w);
            }
        }
    }

    std::string out;
    for (const std::string &word : compounds) {
        out += word + '\n';
    }
    std::cout << out;
    return 0;
}