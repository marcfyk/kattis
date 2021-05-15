#include <iostream>
#include <vector>

int main() {
    int k;
    std::cin >> k;
    std::vector<int> signatures(k);
    for (int i = 0; i < k; ++i) {
        std::cin >> signatures[i];
    }
    int count = 1;
    int prev = signatures[0];
    for (int i = 1; i < k; ++i) {
        if (signatures[i] < prev) {
            ++count;
        }
        prev = signatures[i];
    }

    std::cout << count;
    return 0;
}