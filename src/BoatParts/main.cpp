#include <iostream>
#include <set>

int main() {
    int P, N;
    std::cin >> P >> N;

    std::set<std::string> parts;
    for (int i = 1; i <= N; ++i) {
        std::string part;
        std::cin >> part;
        parts.insert(part);
        if (parts.size() == P) {
            std::cout << i;
            return 0;
        }
    }
    std::cout << "paradox avoided";
    
    return 0;
}