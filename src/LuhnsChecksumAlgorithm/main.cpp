#include <iostream>
#include <vector>

bool verify_number(std::string &n) {
    std::vector<int> digits;

    for (char &digit : n) {
        digits.push_back(digit - '0');
    }

    for (int i = digits.size() - 2; i >= 0; i -= 2) {
        digits[i] *= 2;
        if (digits[i] > 9) {
            digits[i] = digits[i] % 10 + digits[i] / 10;
        }
    }

    int sum = 0;
    for (int &digit : digits) {
        sum += digit;
    }
    return sum % 10 == 0;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<std::string> numbers;

    for (int i = 0; i < n; ++i) {
        std::string num;
        std::cin >> num;
        numbers.push_back(num);
    }

    std::string out;
    for (std::string &num : numbers) {
        if (verify_number(num)) {
            out += "PASS";
        } else {
            out += "FAIL";
        }
        out += '\n';
    }
    std::cout << out;

    return 0;
}