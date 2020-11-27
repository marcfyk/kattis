#include <iostream>

int main() {
    int g1, g2, g3, g4;
    std::cin >> g1 >> g2 >> g3 >> g4;
    int e1, e2, e3, e4;
    std::cin >> e1 >> e2 >> e3 >> e4;

    int g_score = g1 + g2 + g3 + g4;
    int e_score = e1 + e2 + e3 + e4;

    if (g_score > e_score) {
        std::cout << "Gunnar";
    } else if (e_score > g_score) {
        std::cout << "Emma";
    } else {
        std::cout << "Tie";
    }


    return 0;
}