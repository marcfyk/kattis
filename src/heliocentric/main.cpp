#include <iostream>
#include <vector>

class Orbit {
public:
    int e, m;
    Orbit() : e(-1), m(-1) {}
    Orbit(int e, int m) : e(e), m(m) {}
    int solve();
};

int Orbit::solve() {
    int count = 0;
    int x = e;
    int y = m;
    while (x != 0 or y != 0) {
        ++count;
        x = (x + 1) % 365;
        y = (y + 1) % 687;
    }
    return count;
}

int main() {
    int e, m;
    std::vector<Orbit> orbits;
    while (std::cin >> e) {
        std::cin >> m;
        orbits.push_back(Orbit(e, m));
    }

    std::string out;
    for (int i = 1; i <= orbits.size(); ++i) {
        out += "Case " + std::to_string(i) + ": " + std::to_string(orbits[i - 1].solve()) + '\n';
    }

    std::cout << out;

    return 0;
}