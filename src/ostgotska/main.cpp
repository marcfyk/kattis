#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    std::string word;
    int word_count = 0;
    int words_with_ae = 0;
    while (std::cin >> word) {
        ++word_count;
        if (word.find("ae") != -1) {
            ++words_with_ae;
        }
    }
    if (!word_count) {
        std::cout << "haer talar vi rikssvenska";
    } else {
        double ratio = double(words_with_ae) / double(word_count);
        std::cout << (ratio >= 0.4 ? "dae ae ju traeligt va" : "haer talar vi rikssvenska");
    }
}