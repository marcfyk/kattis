#include <iostream>
#include <map>

void get_digits(int x, std::map<int, int> &digits) {
    int num = x;
    while (num != 0) {
        ++digits[num % 10];
        num /= 10;
    }
}

int main() {
    int L, H;
    std::cin >> L >> H;
    int count;
    for (int i = L; i < H; ++i) {
        std::map<int, int> digits;
        get_digits(i, digits);
        bool is_valid = true;
        for (auto const &[digit, count] : digits) {
            if (digit == 0 || count > 1 || i % digit != 0) {
                is_valid = false;
                break;
            }
        }
        if (is_valid) {
            ++count;
        }
    }
    std::cout << count;
    return 0;
}