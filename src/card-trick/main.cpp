#include <iostream>
#include <vector>
#include <deque>

int main() {
    int t;
    std::cin >> t;
    std::vector<int> numbers(t);
    std::string out;
    for (int i = 0; i < t; ++i) {
        std::cin >> numbers[i];
    }
    for (const int n : numbers) {
        std::deque<int> cards;
        cards.push_back(n);
        for (int i = n - 1; i >= 1; --i) {
            cards.push_front(i);
            for (int j = 0; j < i; ++j) {
                cards.push_front(cards.back());
                cards.pop_back();
            }
        }
        for (const int c : cards) {
            out += std::to_string(c) + ' ';
        }
        out += '\n';
    }
    std::cout << out;
    return 0;
}