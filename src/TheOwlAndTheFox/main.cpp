#include <iostream>
#include <string>
#include <vector>

void getdigits(int x, std::vector<int> &d) {
    int n = x;
    while (n != 0) {
        d.push_back(n % 10);
        n /= 10;
    }
}

int getsum(const std::vector<int> &digits) {
    int n = 0;
    for (int i : digits) {
        n += i;
    }
    return n;
}

int main() {
    int T;
    std::cin >> T;
    std::string out;
    for (int i = 0; i < T; ++i) {
        int N;
        std::cin >> N;
        std::vector<int> digits;
        getdigits(N, digits);
        int sum = getsum(digits);
        for (int j = N; j >= 0; --j) {
            std::vector<int> next_digits;
            getdigits(j, next_digits);
            int next_sum = getsum(next_digits);
            if (next_sum + 1 == sum) {
                out += std::to_string(j) + '\n';
                break;
            }
        }
    }
    std::cout << out;
    return 0;
}