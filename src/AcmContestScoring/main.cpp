#include <iostream>
#include <map>
#include <set>

int main() {
    int m;
    char p;
    std::string result;
    std::cin >> m;

    std::set<char> unsolved;
    std::map<char, int> scores;

    while (m != -1) {
        std::cin >> p >> result;
        bool is_solved = result == "right";
        if (!scores.count(p)) {
            scores.insert(std::pair<char, int>(p, 0));
        }
        if (is_solved) {
            unsolved.erase(p);
            scores[p] += m;
        } else {
            unsolved.insert(p);
            scores[p] += 20;
        }
        std::cin >> m;
    }

    int count = scores.size() - unsolved.size();
    int total_score = 0;
    for (auto const &[k, v] : scores) {
        if (!unsolved.count(k)) {
            total_score += v;
        }
    }

    std::cout << count << " " << total_score;


    return 0;
}