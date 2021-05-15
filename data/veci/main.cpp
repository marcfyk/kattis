#include <iostream>
#include <unordered_map>

std::unordered_map<int, int> get_map(const int n) {
    std::unordered_map<int, int> m;
    int num = n;
    while (num) {
        ++m[num % 10];
        num /= 10;
    }
    return m;
}

int get_digit_count(const std::unordered_map<int, int> m) {
    int n = 0;
    for (const auto &[digit, count] : m) {
        n += count;
    }
    return n;
}

int main() {
    int n;
    std::cin >> n;

    std::unordered_map<int, int> map = get_map(n);
    int length = get_digit_count(map);

    int num = n + 1;
    while (true) {
        std::unordered_map<int, int> m = get_map(num);
        if (get_digit_count(m) > length) {
            num = 0;
            break;
        }
        if (m == map) {
            break;
        }
        ++num;
    }

    std::cout << num;

    return 0;
}