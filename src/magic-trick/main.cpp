#include <iostream>
#include <unordered_set>

int main() {
    std::string s;
    std::cin >> s;
    std::unordered_set set(s.begin(), s.end());
    std::cout << (set.size() == s.size() ? 1 : 0);
    return 0;
}
