#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

int main() {
    int n;
    std::cin >> n;
    std::vector<std::string> words(n);
    for (auto i = 0; i < n; ++i) {
        std::string word;
        std::cin >> word;
        if (i % 2 == 0) {
            words.push_back(word);
        }
    }
    std::copy(words.begin(), words.end(), std::ostream_iterator<std::string>(std::cout, "\n"));
    return 0;
}
