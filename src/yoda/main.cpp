#include <iostream>
#include <vector>
#include <cmath>

void get_digits(int n, std::vector<int>& v) {
    int number = n;
    do {
        v.push_back(number % 10);
        number /= 10;
    } while (number != 0);
}

void vector_to_digit(int &n, std::vector<int>& v) {
    n = 0;
    for (int i = 0; i < v.size(); ++i) {
        n += (std::pow(10, i)) * v[i];
    }
}

void print_vector(std::vector<int>& v) {
    std::cout << '[';
    for (int i : v) {
        std::cout << ' ' << i << ' ';
    }
    std::cout << ']' << '\n';
}

void zip(std::vector<int>& x_digits, std::vector<int>& y_digits, 
        std::vector<int>& x_out, std::vector<int>& y_out) {
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < x_digits.size() and j < y_digits.size()) {
        int x = x_digits[i];
        int y = y_digits[j];
        if (x < y) {
            y_out.push_back(y);
        } else if (x > y) {
            x_out.push_back(x);
        } else {
            x_out.push_back(x);
            y_out.push_back(y);
        }
        ++i;
        ++j;
    }
    while (i < x_digits.size()) {
        x_out.push_back(x_digits[i++]);
    }
    while (j < y_digits.size()) {
        y_out.push_back(y_digits[j++]);
    }
}

int main() {
    int x, y;
    std::cin >> x >> y;
    std::vector<int> x_digits, y_digits, x_out, y_out;
    get_digits(x, x_digits);
    get_digits(y, y_digits);
    zip(x_digits, y_digits, x_out, y_out);
    int x_zip, y_zip;
    vector_to_digit(x_zip, x_out);
    vector_to_digit(y_zip, y_out);
    std::string x_str = x_out.size() ? std::to_string(x_zip) : "YODA";
    std::string y_str = y_out.size() ? std::to_string(y_zip) : "YODA";
    std::cout << x_str << std::endl;
    std::cout << y_str << std::endl;
    return 0;
}
