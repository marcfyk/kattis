#include <iostream>
#include <vector>
#include <unordered_map>

class Pair {
public:
    int A, B;
    Pair() : A(-1), B(-1) {}
    Pair(int A, int B) : A(A), B(B) {}
};

Pair get_indexes(const std::string &A, const std::string &B) {
    std::unordered_map<char, int> set_a, set_b;
    for (int i = 0; i < A.length(); ++i) {
        char a = A[i];
        if (!set_a.count(a)) {
            set_a[a] = i;
        }
    }
    for (int i = 0; i < B.length(); ++i) {
        char b = B[i];
        if (!set_b.count(b)) {
            set_b[b] = i;
        }
    }
    for (int i = 0; i < A.length(); ++i) {
        char a = A[i];
        if (set_b.count(a)) {
            return Pair(set_a[a], set_b[a]);
        }
    }
    return Pair();
}

int main() {
    std::string A, B;
    std::cin >> A >> B;
    int M = B.length();
    int N = A.length();    
    std::vector<std::string> table(M);
    for (int i = 0; i < M; ++i) {
        table[i] = std::string(N, '.');
    }

    Pair p = get_indexes(A, B);
    table[p.B] = A;
    for (int i = 0; i < M; ++i) {
        table[i][p.A] = B[i];
    }

    std::string out;
    for (const std::string &x: table) {
        out += x + '\n';
    }
    std::cout << out;

    return 0;
}