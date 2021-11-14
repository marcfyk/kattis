#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

std::vector<size_t> get_lps(const std::string &pattern) {
    std::vector<size_t> lps(pattern.size());
    lps[0] = 0;
    int length = 0;
    for (auto i = 1; i < pattern.size(); ++i) {
        if (pattern[i] == pattern[length]) {
            lps[i] = ++length;
        } else if (length == 0) {
            lps[i] = length;
        } else {
            length = lps[length - 1];
        }
    }
    return lps;
}

std::vector<size_t> kmp(
    const std::string &sequence,
    const std::string &pattern
) {
    if (!pattern.size()) {
        return std::vector<size_t>();
    }
    const auto lps = get_lps(pattern);
    std::vector<size_t> indices;

    auto index_sequence = 0;
    auto index_pattern = 0;

    while (index_sequence < sequence.size()) {
        if (sequence[index_sequence] == pattern[index_pattern]) {
            ++index_sequence;
            ++index_pattern;
        }

        if (index_pattern == pattern.size()) {
            indices.push_back(index_sequence - index_pattern);
            index_pattern = lps[index_pattern - 1];
        } else if (index_sequence < sequence.size() && sequence[index_sequence] != pattern[index_pattern]) {
            if (index_pattern) {
                index_pattern = lps[index_pattern - 1];
            } else {
                ++index_sequence;
            }
        }
    }

    return indices;
}

int main() {
    std::string sequence;
    std::cin >> sequence;
    const auto kmp1 = kmp(sequence, ":)");
    const auto kmp2 = kmp(sequence, ":-)");
    const auto kmp3 = kmp(sequence, ";)");
    const auto kmp4 = kmp(sequence, ";-)");
    std::vector<size_t> output;
    std::copy(kmp1.begin(), kmp1.end(), std::back_inserter(output));
    std::copy(kmp2.begin(), kmp2.end(), std::back_inserter(output));
    std::copy(kmp3.begin(), kmp3.end(), std::back_inserter(output));
    std::copy(kmp4.begin(), kmp4.end(), std::back_inserter(output));
    std::sort(output.begin(), output.end());
    output.erase(std::unique(output.begin(), output.end()), output.end());
    std::copy(output.begin(), output.end(), std::ostream_iterator<size_t>(std::cout, "\n"));
    return 0;
}