#include <iostream>
#include <unordered_set>

int main() {
    std::string word;
    std::string guesses;
    std::cin >> word >> guesses;

    std::unordered_set<char> set;
    for (char c : word) {
        set.insert(c);
    }
    int words_to_be_guessed = set.size();
    int strikes = 0;
    for (int i = 0; i < guesses.size() && strikes < 10; ++i) {
        if (set.count(guesses[i])) {
            set.erase(guesses[i]);
        } else {
            ++strikes;
        }
    }
    std::cout << (set.size() ? "LOSE" : "WIN");


    return 0;
}