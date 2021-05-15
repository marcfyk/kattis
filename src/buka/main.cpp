#include <iostream>

std::string add(const std::string &A, const std::string &B) {
    if (A.size() < B.size()) {
        return add(B, A);
    }
    std::string out = A;
    ++out[A.size() - B.size()];
    return out;
}

std::string multiply(const std::string &A, const std::string &B) {
    return A + std::string(B.size() - 1, '0');
}

int main() {
    std::string A, B;
    char op;
    std::cin >> A >> op >> B;
    if (op == '+') {
        std::cout << add(A, B);
    } else if (op == '*') {
        std::cout << multiply(A, B);
    }
    return 0;
}