#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>


int main() {

    std::string repr[]{
        "**** ** ** ****",
        "  *  *  *  *  *",
        "***  *****  ***",
        "***  ****  ****",
        "* ** ****  *  *",
        "****  ***  ****",
        "****  **** ****",
        "***  *  *  *  *",
        "**** ***** ****",
        "**** ****  ****",
    };

    std::unordered_map<std::string, std::string> map;
    for (int i = 0; i < 10; ++i) {
        map[repr[i]] = std::to_string(i);
    }

    std::vector<std::string> lines(5);
    for (int i = 0; i < 5; ++i) {
        std::getline(std::cin, lines[i]);
    }

    int digit_count = (lines[0].length() + 1) / 4;
    std::vector<std::string> digits(digit_count);
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < digit_count; ++j) {
            digits[j] += lines[i].substr(j * 4, 3);
        }
    }

    std::string num;
    bool is_valid = true;
    for (const std::string &d : digits) {
        if (!map.count(d)) {
            is_valid = false;
            break;
        }
        num += map[d];
    }

    if (!is_valid) {
        std::cout << "BOOM!!";
    } else {
        int n = std::stoi(num);
        if (n % 6 != 0) {
            std::cout << "BOOM!!";
        } else {
            std::cout << "BEER!!";
        }
    }
    return 0;
}